#include "egscene.h"
#include "advancedpointshape.h"
#include "edgeshape.h"
#include "edge.h"
#include "vertex.h"
#include <QGraphicsView>
#include <iostream>
QColor EGScene::s_lineColor =  QColor( Qt::GlobalColor::black ) ;
const qreal EGScene::s_lineWidth = 9. ;
const QPointF EGScene::s_forbiddenPoint = QPointF(-52.365 , -52.365) ;
using namespace std;
int x_firtsVertexDeletedLine = 0;
int y_firtsVertexDeletedLine = 0;
bool isReset = false;
EGScene::EGScene(QObject * parent):QGraphicsScene(parent)
{
    setSceneRect(-350,-350,700,700);
    tryDrawing = false;
    isAttached = false;
    m_currentLine = 0;
    tempDrawingLine = nullptr;
    isFinishing = false;
    m_clickByClikMode = false;
}

EGScene::~EGScene()
{

     qDeleteAll(m_lineList);
     m_lineList.clear();
    if( tempDrawingLine!= nullptr)
    {
        delete tempDrawingLine;
        tempDrawingLine = nullptr;
    }
}

void EGScene::appendPointShape(AdvancedPointShape *point)
{
    m_pointsShapesList.append(point);
}

void EGScene::appendEdgeShape(EdgeShape *point)
{
    m_edgesShapesList.append(point);
}

/// \brief EGScene::resetDrawing // dabei haben wir zwei resetOptionen, das erste ist alle Kantenbelgegungen zu löschen, das zweite ist nur die letzte Kantenbelegung zu löschen.
/// \param allOrOne: löschng alle Kantenbelegungen falls 1 wenn 2 nur das letzte Kantenbelgung Löschen
void EGScene::resetDrawing(int allOrLast)
{
    if(allOrLast == 1){ // falls 1 dann werden alle Belegungen gelöscht
        qDeleteAll(m_lineList); //  alle angezeigten Linen Lösche
        m_lineList.clear();     // speicherplatz freigabe
        m_edgesDrawnList.clear();   //  alle Belgungen der Kanten lösche
         m_currentLine = 0;         //  der Line auf der Anfang setzten
    }
    else if(allOrLast == 2){



            int sizeabsteigend = (m_lineList.size()-1); //Size -1 um auf das letzte Element zugreifen zu können.
            if(!m_lineList.empty()){  // Nur falls m_lineList nicht leer ist.
                //  Die x und y Koordinaten der Anfangsknote der zu löschenden Kantenbelegung speichern,
                //  damit der Spieler mit den gespeicherten Koortdinaten anfängt.
                x_firtsVertexDeletedLine = m_edgesDrawnList[sizeabsteigend].m_theOne.m_x;
                y_firtsVertexDeletedLine = m_edgesDrawnList[sizeabsteigend].m_theOne.m_y;
                delete m_lineList[sizeabsteigend]; // Die letzte angezeigte Linie löschen.
                m_lineList.erase(m_lineList.cbegin()+sizeabsteigend); // Angezeigte Linie aus der Liste entfernen.
                // Entfernung der Belegung der Kante aus der Edgesliste.
                m_edgesDrawnList.erase(m_edgesDrawnList.cbegin()+sizeabsteigend);
            }
            m_currentLine = sizeabsteigend; // Die aktuelle Belegung der Kante auf das vorletzte Linie setzen.
    }
    if( tempDrawingLine!= nullptr)
    {
        delete tempDrawingLine; // Löschen der tempöre Line
        tempDrawingLine = nullptr;
    }
    emit reseted();
}

void EGScene::clean()
{
    resetDrawing(1); // 1 wird übergeben um alle Belegungen der Kanten zu löschen.
    qDeleteAll(m_pointsShapesList);
    m_pointsShapesList.clear();
    qDeleteAll(m_edgesShapesList);
    m_edgesShapesList.clear();
    tryDrawing = false;
    isAttached = false;
    isFinishing = false;
    for(QGraphicsItem * it : items()){
        removeItem(it);
    }
}

void EGScene::drawCurrentLine(QGraphicsSceneMouseEvent *event)
{
    // refreshing the drawing by hiding and recreating line with new position
    if(tempDrawingLine!= nullptr)
        tempDrawingLine->setVisible(false);
    tempDrawingLine = addLine(origPoint.x(),origPoint.y(), event->scenePos().x(),
                              event->scenePos().y(),QPen(s_lineColor,s_lineWidth));
}

void EGScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(isFinishing)
        return;
    if(event->button() == Qt::RightButton)
    {
        if(!m_lineList.empty()){
            resetDrawing(2); // wir übergeben 2 um die letzte Belgung der Kante zu löschen
            emit stepedUp(m_currentLine, m_edgesShapesList.size());
            tryDrawing = false;
            isAttached = false;
            isReset = true;
           //return; wir löschen return damit dierkt ein line aus der Anfangsknote angezeigt wird ohne den linken maustaste zu drücken
        }
        else if(m_lineList.empty()){    // für den fall das kein Kanten belegt worden sind
            resetDrawing(1);
            emit stepedUp(m_currentLine, m_edgesShapesList.size());
            tryDrawing = false;
            isAttached = false;
            isReset = false;    // ist false weil wir in dem fall nichts gelöscht haben und dadurch fängen wir bei der erste Knote an
            return; // wir lassen return damit wir die Anfangsknote die wir auswählen wollen anklicken zu müssen. um diese zu belegen, sonst wird auf die Knote automatisch gederückt.
        }
    }
    QPointF computedMagnetedVertex;
    if(isReset == true){
        computedMagnetedVertex = QPointF(x_firtsVertexDeletedLine, y_firtsVertexDeletedLine); // mit dem Kordinaten der anfangsknote der gelöschte Kantenbelegung inizializieren
        tryDrawing = true;
        if(computedMagnetedVertex != s_forbiddenPoint) // we are near a vertex
        {
            if( !isAttached )
            {
                origPoint = computedMagnetedVertex;
                isAttached = true;
            }
            if( computedMagnetedVertex == origPoint) // damit der Line bei den letzten Knoten anfängt
                checkAndDrawPermanentLine(event,computedMagnetedVertex);
            else
                drawCurrentLine(event);
        }
        else
        {
            if(isAttached )
                drawCurrentLine(event);
        }
        isReset = false;
    }
    if(isReset == false){
        computedMagnetedVertex = findMagnetedVertex(event);
        tryDrawing = true;
        if(computedMagnetedVertex != s_forbiddenPoint)// we are near a vertex
        {
            if( !isAttached )
            {
                origPoint = computedMagnetedVertex;
                isAttached = true;
            }
            if( computedMagnetedVertex != origPoint)
                checkAndDrawPermanentLine(event,computedMagnetedVertex);
            else
                drawCurrentLine(event);
        }
        else
        {
            if(isAttached )
                drawCurrentLine(event);
        }
    }
    QGraphicsScene::mousePressEvent(event);
}

void EGScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(isFinishing)
        return;
    if(!m_clickByClikMode)
    {
        if (tryDrawing) // we already pressed the mouse button
        {
            QPointF computedMagnetedVertex = findMagnetedVertex(event);
            if(!isAttached) // previously, we were not drawing a line
            {
                if(computedMagnetedVertex != s_forbiddenPoint) // we are near a vertex
                {
                    origPoint = computedMagnetedVertex; // sets the origin of line as the center of vertex near we clicked
                    isAttached = true;
                }
            }
            else // previously, we were drawing a line
            {
                if( computedMagnetedVertex == origPoint || computedMagnetedVertex == s_forbiddenPoint)
                { // we are near the vertex we beginned the line, or ouside of if, but not on another vertex
                    // refreshing the drawing by hiding and recreating line with new position
                    drawCurrentLine(event);
                }
                else // we reached another vertex
                    checkAndDrawPermanentLine(event, computedMagnetedVertex);
            }
        }
    }
    else
    {
        if(isAttached)
            drawCurrentLine(event);
    }
    QGraphicsScene::mouseMoveEvent(event);
}

void EGScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if(isFinishing)
        return;

    QGraphicsScene::mouseReleaseEvent(event);
}

QPointF EGScene::findMagnetedVertex(QGraphicsSceneMouseEvent *event)
{
    for(int i = 0; i < m_pointsShapesList.size(); i++)
    {
        AdvancedPointShape *point = m_pointsShapesList.at(i);
        if(point->contains(point->mapFromScene(event->scenePos())))
            return QPointF(point->m_x,point->m_y);
    }
    return s_forbiddenPoint;
}

void EGScene::checkAndDrawPermanentLine(QGraphicsSceneMouseEvent *event, const QPointF &reachedPoint)
{
    bool edgeFound = false;
    bool edgeAlreadyDrawn = false;
    Edge thisEdge( Vertex(origPoint.x(),origPoint.y()), Vertex(reachedPoint.x(), reachedPoint.y()) );
    for( int i = 0; i<m_edgesShapesList.size() ; i++ )
    {// looks if the edge we draw has to be drawn
        auto aEdgeShape = m_edgesShapesList.at(i);
        Edge aEdge( Vertex(aEdgeShape->m_Ox,aEdgeShape->m_Oy), Vertex(aEdgeShape->m_Ex,aEdgeShape->m_Ey) );
        if(aEdge == thisEdge)
        {
            edgeFound = true;
            break;
        }
    }

    for( int i = 0; i<m_edgesDrawnList.size() ; i++ )
    {// looks if the edge we draw has already been drawn (forbidden in Euler Graph rules)
        if(m_edgesDrawnList.at(i) == thisEdge)
        {
            edgeAlreadyDrawn = true;
            break;
        }
    }

    if(!edgeFound || edgeAlreadyDrawn)
    { // if the edge does not respect requirements, we continue drawing current line
        drawCurrentLine(event);
    }
    else
    { // we permanently draw the line and set another origin point for a new line
        QGraphicsLineItem *permanentLine = addLine(origPoint.x(),origPoint.y(), reachedPoint.x(), reachedPoint.y(),QPen(s_lineColor,s_lineWidth));
        m_lineList.append(permanentLine);
        m_edgesDrawnList.append( Edge( Vertex(origPoint.x(),origPoint.y()) , Vertex(reachedPoint.x(), reachedPoint.y())) );
        m_currentLine++;
        origPoint = reachedPoint;
    }

    emit stepedUp(m_currentLine, m_edgesShapesList.size());
    if( m_currentLine >= m_edgesShapesList.size())
    {
        isFinishing = true;
        emit justFinished();
    }

}

void EGScene::sendStepUpSignal()
{
    emit stepedUp(m_currentLine, m_edgesShapesList.size());
}

void EGScene::changeLineColor(QColor color)
{
    s_lineColor = color;
}

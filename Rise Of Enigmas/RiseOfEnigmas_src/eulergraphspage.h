#ifndef EULERGRAPHSPAGE_H
#define EULERGRAPHSPAGE_H

#include <QScrollArea>
#include <QPushButton>

#include "EulerGraphInteract/eulergraphinteract.h"
#include "EulerGraphInteract/vertex.h"
#include "EulerGraphInteract/edge.h"
#include "widgets/eulergraphstimechallengewidget.h"
#include "widgets/eulergraphsinfoandoptionswidget.h"
#include "widgets/congradulationdialog.h"

class MainWindow;
class EulerGraphGenerationPage;

class EulerGraphsPage : public QScrollArea
{
    Q_OBJECT
public:
    explicit EulerGraphsPage(QWidget *parent = nullptr); //must have a MainWindow as a parent
    EulerGraphInteract *eulerGraph; // Eulerian Graphs module
    EulerGraphsTimeChallengeWidget *EGtimeChallengeWidget;// EG for "Euler Graphs"
    EulerGraphsInfoAndOptionsWidget *EGinfoOptionsWidget;
    QMap< uint, QPair< QList<Vertex> , QList<Edge> > > EulerGraphStageData; // Eulerian Graphs vertexes and edges are hard stored
    uint EGscore;
    uint currentGraphNum;
    std::vector<uint> solvedLevels;// In diesem Vector werden die abgeschlossene Levelsnummer gespeichert
    bool EGclickbyClickMode;
    QColor EGlineColor;
    int EGcustomColorPosition;
    CongradulationDialog *congradulationPopup;
    QPushButton *leftButton;
    QPushButton *rightButton;


    void scaleToScreen();
    bool m_isValid = false;
    void resetPage();
    void refreshShow();
    void checkButtonsAvailability(); // Für Aktivierung und Deaktivierung des rechten oder linken Buttons, falls der Spieler sich im letzten oder im ersten Level befindet.
private:
    void constructData(); // Create vertexes and edges for Eulerian Graphs
    void finishCreate();
    MainWindow *m_parent;

public slots:
    void chooseEGlineColor();
    void resetEulerGraphScore();
    void changeEGMagnetMode(int status);
    void EGStepedUp(uint step, uint total);
    void setNextEulerGraph();
    void checkLevelScore(); // Überprüfung der erreichten und nicht erreichten Levels und eine Informationsausgabe darüber
    void EGstartChallenge();
    void translateEGInstructions();
    void goToPreviousGraph();
    void goToNextGraph();

signals:
    void EGlineColorRequest(QColor color);

};

#endif // EULERGRAPHSPAGE_H

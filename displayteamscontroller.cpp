#include "displayteamscontroller.h"

// constructor
DisplayTeamsController::DisplayTeamsController()
{
    DisplayTeams *disWin = new DisplayTeams();
    setTeamWin(disWin);
    disTeamsWin->show();
}

// destructor
DisplayTeamsController::~DisplayTeamsController()
{
}


void DisplayTeamsController::setTeamWin(DisplayTeams* window)
{
    disTeamsWin = window;
}



void DisplayTeamsController::showSummary()
{
    QString fileN = "/home/admin/DisplayText/summary.txt";
    QFile file(fileN);
    // check if file is open - if not open show an error
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "Info", file.errorString());

    // convert file into a stream - to show it in the text box
    QTextStream stream(&file);

    // send stream to gui to display
    disTeamsWin->showSummaryText(&stream, fileN);


}

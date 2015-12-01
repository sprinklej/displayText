#ifndef DISPLAYTEAMSCONTROLLER_H
#define DISPLAYTEAMSCONTROLLER_H

// Included to read/display files and errors
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

#include <QDir>

#include "displayteams.h"

using namespace std;

class DisplayTeamsController
{
public:
    DisplayTeamsController();
    ~DisplayTeamsController();
    void setTeamWin(DisplayTeams*window);
    void saveToFile();
    void showReport(QString fileName, int flag);

private:
    DisplayTeams *disTeamsWin;
};

#endif // DISPLAYTEAMSCONTROLLER_H

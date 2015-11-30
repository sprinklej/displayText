#ifndef DISPLAYTEAMSCONTROLLER_H
#define DISPLAYTEAMSCONTROLLER_H

// Included to read/display files and errors
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

#include <QString>

#include "displayteams.h"

class DisplayTeamsController
{
public:
    DisplayTeamsController();
    ~DisplayTeamsController();
    void setTeamWin(DisplayTeams*window);
    void showSummary();

private:
    DisplayTeams *disTeamsWin;
};

#endif // DISPLAYTEAMSCONTROLLER_H

#include "displayteamscontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //DisplayTeams w;
    //w.show();
    //w.showText();

    DisplayTeamsController disTeamsCon;
    disTeamsCon.showSummary();

    return a.exec();
}

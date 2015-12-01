#include "displayteamscontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DisplayTeamsController disTeamsCon;
    disTeamsCon.showReport("/home/admin/DisplayText/summary.txt", 0); //summary report
    disTeamsCon.saveToFile(); //Detailed report

    return a.exec();
}

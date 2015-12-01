#include "displayteamscontroller.h"
#include <QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QDir current = QDir::current();
    current.cdUp();
    QString summaryPath = current.path() + "/DisplayText/summary.txt";

    DisplayTeamsController disTeamsCon;
    disTeamsCon.showReport(summaryPath, 0); //summary report
    disTeamsCon.saveToFile(); //Detailed report

    return a.exec();
}

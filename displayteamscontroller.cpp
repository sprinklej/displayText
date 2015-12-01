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

void DisplayTeamsController::saveToFile()
{
    // set file save location
    QDir current = QDir::current();
    current.cdUp();
    QString filePath = current.path() + "/test_file_for_00100100.txt"; // will want to change file name to a var
    QFile newFile(filePath);

    // just some text to put in the file
    QString text = "This is some text.";

    // add the text to the file
    newFile.open(QIODevice::WriteOnly | QIODevice::Text); // create/open file - overwrite files of same name
    if (newFile.isOpen()) { // should always check if file is open
        QTextStream stream(&newFile);
        stream << text;
    }

    newFile.close(); // close file

    showReport(filePath, 1);
}



void DisplayTeamsController::showReport(QString fileName, int flag)
{
    QString fileN = fileName;
    QFile file(fileN);
    // check if file is open - if not open show an error
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "Info", file.errorString());

    // convert file into a stream - to show it in the text box
    QTextStream stream(&file);

    // send stream to gui to display
    if (flag == 0) {
        disTeamsWin->showSummaryText(&stream,  fileN);
    } else if (flag == 1) {
       disTeamsWin->showDetailedText(&stream,  fileN);
    }

}

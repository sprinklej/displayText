#include "displayteams.h"
#include "ui_displayteams.h"

// constructor
DisplayTeams::DisplayTeams (QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayTeams)
{
    ui->setupUi(this);
}



// destructor
DisplayTeams::~DisplayTeams()
{
    delete ui;
}



// show text on the summary tab
void DisplayTeams::showSummaryText(QTextStream *stream, QString FN)
{
    // display the teams
    ui->textBrowser_Summary->setText(stream->readAll());

    // display the files location
    FN = "File location: " + FN;
    ui->label_Summary_Loc->setText(FN);
}



// show text on the detailed tab
void DisplayTeams::showDetailedText(QTextStream *stream, QString FN)
{
    // display the teams
    ui->textBrowser_Detailed->setText(stream->readAll());

    // display the files location
    FN = "File location: " + FN;
    ui->label_Detailed_Loc->setText(FN);
}

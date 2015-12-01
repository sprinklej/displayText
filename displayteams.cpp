#include "displayteams.h"
#include "ui_displayteams.h"


DisplayTeams::DisplayTeams (QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayTeams)
{
    ui->setupUi(this);
}

DisplayTeams::~DisplayTeams()
{
    delete ui;
}


void DisplayTeams::showSummaryText(QTextStream *stream, QString FN)
{
    // display the teams
    ui->textBrowser_Summary->setText(stream->readAll());

    // display the files location
    FN = "File location: " + FN;
    ui->label_Summary_Loc->setText(FN);
}


void DisplayTeams::showDetailedText(QTextStream *stream, QString FN)
{
    // display the teams
    ui->textBrowser_Detailed->setText(stream->readAll());

    // display the files location
    FN = "File location: " + FN;
    ui->label_Detailed_Loc->setText(FN);
}

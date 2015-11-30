#ifndef DISPLAYTEAMS_H
#define DISPLAYTEAMS_H

#include <QDialog>
// included to display files
#include <QTextStream>
#include <QString>

namespace Ui {
class DisplayTeams;
}

class DisplayTeams : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayTeams(QWidget *parent = 0);
    ~DisplayTeams();
    void showSummaryText(QTextStream *stream, QString FN);

private:
    Ui::DisplayTeams *ui;
};

#endif // DISPLAYTEAMS_H

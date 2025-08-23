#ifndef DIALOGASSIGNMEMBERPATCH_H
#define DIALOGASSIGNMEMBERPATCH_H

#include <QDialog>

namespace Ui {
class DialogAssignMemberPatch;
}

class DialogAssignMemberPatch : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAssignMemberPatch(QWidget *parent = nullptr);
    ~DialogAssignMemberPatch();

    short getMemberNr() const;

    short getPatchNr() const;

private:
    Ui::DialogAssignMemberPatch *ui;

    short memberNr;
    short patchNr;

    void setMemberNr();
    void setPatchNr();
};

#endif // DIALOGASSIGNMEMBERPATCH_H

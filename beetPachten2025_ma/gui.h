#ifndef GUI_H
#define GUI_H

#include <QWidget>
#include <vector>
#include "association.h"
#include "dialogassignmemberpatch.h"
#include "dialoglistmemberpatch.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class GUI;
}
QT_END_NAMESPACE

class GUI : public QWidget
{
    Q_OBJECT

public:
    GUI(QWidget *parent = nullptr);
    ~GUI();

public slots:
    void showListPatches();
    void showListMembers();
    void assignPatchMember();
    void releasePatchMember();
    void ceatePatches();
    void newMember();
    void showMemberPatches();

private:
    Ui::GUI *ui;
    Association *association;
    DialogAssignMemberPatch *dialogAssignMemberPatch;
    DialogListMemberPatch *dialogListMemberPatch;
};
#endif // GUI_H

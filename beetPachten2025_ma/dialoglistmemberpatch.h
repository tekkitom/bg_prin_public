#ifndef DIALOGLISTMEMBERPATCH_H
#define DIALOGLISTMEMBERPATCH_H

#include <QDialog>
#include <vector>
#include "association.h"
#include "patch.h"

using namespace std;

namespace Ui {
class DialogListMemberPatch;
}

class DialogListMemberPatch : public QDialog
{
    Q_OBJECT

public:
    explicit DialogListMemberPatch(Association *association, QWidget *parent = nullptr);
    ~DialogListMemberPatch();

public slots:
    void findMemberPatches();

private:
    Ui::DialogListMemberPatch *ui;
    Association *association;
};

#endif // DIALOGLISTMEMBERPATCH_H

/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QPushButton *btnAssignPatch;
    QLineEdit *edtMemberName;
    QSpinBox *edtMemberNr;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnReleasePatch;
    QListWidget *listPatches;
    QPushButton *btnGetListPatches;

    void setupUi(QWidget *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName("GUI");
        GUI->resize(800, 600);
        btnAssignPatch = new QPushButton(GUI);
        btnAssignPatch->setObjectName("btnAssignPatch");
        btnAssignPatch->setGeometry(QRect(50, 90, 131, 29));
        edtMemberName = new QLineEdit(GUI);
        edtMemberName->setObjectName("edtMemberName");
        edtMemberName->setGeometry(QRect(50, 50, 113, 28));
        edtMemberNr = new QSpinBox(GUI);
        edtMemberNr->setObjectName("edtMemberNr");
        edtMemberNr->setGeometry(QRect(193, 50, 81, 29));
        label = new QLabel(GUI);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 63, 20));
        label_2 = new QLabel(GUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 20, 91, 20));
        btnReleasePatch = new QPushButton(GUI);
        btnReleasePatch->setObjectName("btnReleasePatch");
        btnReleasePatch->setGeometry(QRect(50, 140, 131, 29));
        listPatches = new QListWidget(GUI);
        listPatches->setObjectName("listPatches");
        listPatches->setGeometry(QRect(350, 40, 256, 192));
        btnGetListPatches = new QPushButton(GUI);
        btnGetListPatches->setObjectName("btnGetListPatches");
        btnGetListPatches->setGeometry(QRect(200, 90, 141, 29));

        retranslateUi(GUI);

        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QWidget *GUI)
    {
        GUI->setWindowTitle(QCoreApplication::translate("GUI", "GUI", nullptr));
        btnAssignPatch->setText(QCoreApplication::translate("GUI", "Beet pachten", nullptr));
        label->setText(QCoreApplication::translate("GUI", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("GUI", "MitgliedsNr", nullptr));
        btnReleasePatch->setText(QCoreApplication::translate("GUI", "Pacht stornieren", nullptr));
        btnGetListPatches->setText(QCoreApplication::translate("GUI", "Liste aktualisieren", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H

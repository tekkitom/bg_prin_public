#include "viewwidget1.h"
#include "ui_viewwidget1.h"

ViewWidget1::ViewWidget1(QWidget *parent)
    : QWidget(parent), ui(new Ui::ViewWidget1)
    , myLake1 (new ControllerLake){
    ui->setupUi(this);
    connect(ui->btnCreateOneLouncherStandard, &QPushButton::clicked, this, &ViewWidget1::createLauncherTypeStandard);
    //connect(ui->btnCreateOneLouncherLuxurious, &QPushButton::clicked, this, &ViewWidget1::createLauncherTypeLuxuious);
    connect(ui->btnShowListLaunchers, &QPushButton::clicked, this, &ViewWidget1::showListLaunchers);
    connect(ui->btnClearLog, &QPushButton::clicked, this, &ViewWidget1::clearLog);
}

ViewWidget1::~ViewWidget1(){
    delete ui;
    delete myLake1;
}

void ViewWidget1::createLauncherTypeStandard(){
    myLake1->createLauncherStandardType();
}

void ViewWidget1::showListLaunchers(){
    QStringList launersStrings;

    launersStrings = myLake1->getListLaunchers();
    if(launersStrings.size()>0){
        ui->edtListLaunchers->clear();
        for(QString i : launersStrings){
            ui->edtListLaunchers->appendPlainText(i);
        }
    }
}

void ViewWidget1::clearLog()
{
    ui->edtListLaunchers->clear();
}

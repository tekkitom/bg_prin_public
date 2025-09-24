#include "viewwidget1.h"
#include "ui_viewwidget1.h"

ViewWidget1::ViewWidget1(QWidget *parent)
    : QWidget(parent), ui(new Ui::ViewWidget1)
    , myLake1 (new ControllerLake){
    ui->setupUi(this);
}

ViewWidget1::~ViewWidget1(){
    delete ui;
    delete myLake1;
}

void ViewWidget1::createLauncherStandardType(){
    myLake1->createLauncherStandardType();
}

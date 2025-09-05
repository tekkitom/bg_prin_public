#include "widgui.h"
#include "ui_widgui.h"


WidGui::WidGui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WidGui)
{
    ui->setupUi(this);

    myLibSortSearch = new Lib_selectionSort_binSearch();
    connect(ui->btnGenerateLoungers, &QPushButton::clicked, this, &WidGui::generateVectorLoungers);
}

WidGui::~WidGui()
{
    delete ui;
}

void WidGui::generateVectorLoungers(){
    unsigned short index = 0xFFFF;
    vectorLounger.reserve(maxCountLoungers);
    for(unsigned short i = 0; i < maxCountLoungers; ++i){
        vectorLounger[i] = nullptr;
    }

    index = rand() % maxCountLoungers;
    for (unsigned short loungersLeft = maxCountLoungers; loungersLeft > 0; loungersLeft--){
        while(findLoungerById(index))
            index = rand() % maxCountLoungers;
        vectorLounger[index] = new BeachLounger;
    }
}

bool WidGui::findLoungerById(unsigned short id){

    for(unsigned short i = 0; i < maxCountLoungers; i++){
        if(vectorLounger[i])
            if(vectorLounger[i]->getNumber() == id)
                return true;
    }
    return false;
}

void WidGui::printListLoungers(){
    QString outString;
    ui->edtListLoungers->clear();

    for(unsigned short i = 0; i < maxCountLoungers; ++i){
        if(vectorLounger[i]){
            outString = QString::number(vectorLounger[i]->getNumber());
            outString.append(" Zustand:");
            outString.append(vectorLounger[i]->getConditionText());
            ui->edtListLoungers->appendPlainText(outString);
        }
    }
}

void WidGui::sortLoungers()
{
    myLibSortSearch->importArrayLoungers(&vectorLounger);
    myLibSortSearch->sortLoungerAsc();
}

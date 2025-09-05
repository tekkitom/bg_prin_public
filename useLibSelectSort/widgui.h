#ifndef WIDGUI_H
#define WIDGUI_H

#include <QMainWindow>
#include <vector>
#include <random>
#include "lib_selectionsort_binsearch.h"
// #include "lib_selectionSort_binSearch/lib_selectionSort_binSearch_global.h"
#include "beachlounger.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class WidGui;
}
QT_END_NAMESPACE

class WidGui : public QMainWindow
{
    Q_OBJECT

public:
    static const unsigned short maxCountLoungers = 200;
    WidGui(QWidget *parent = nullptr);
    ~WidGui();

public slots:
    void generateVectorLoungers();
    bool findLoungerById(unsigned short id);
    void printListLoungers();
    void sortLoungers();
private:
    Ui::WidGui *ui;
    Lib_selectionSort_binSearch *myLibSortSearch;
    vector <BeachLounger *> vectorLounger;
};
#endif // WIDGUI_H

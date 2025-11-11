#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QString>
#include "modeldata.h"

class Controller
{
public:
    Controller();

    void goToFirstEntry();
    // void goToLastEntry();
    void stepToNextEntryForward();
    void stepToNextEntryBackward();
    bool getCurrentEntryValues(QString &name, QString &telNr);


    bool insertNewEntryFront(QString nameIn, QString telIn);
    bool insertNewEntryBack(QString name, QString telNr);
    bool insertNewEntryMidAfterCurrent(QString NameNach, QString nameIn, QString telIn);
    bool insertNewEntryBeforeCurrent(QString nameVor, QString nameIn, QString telIn);

    bool removeEntry(QString nameIn);
    bool changeEntry(QString nameAlt, QString nameNeu, QString telNeu);

private:
    std::unique_ptr<ModelData> myData;
};

#endif // CONTROLLER_H

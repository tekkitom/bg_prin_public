#include "beachlounger.h"

unsigned short BeachLounger::nextNr = 1;

BeachLounger::BeachLounger() {
    number = nextNr++;
    condition = conditionType::conditionNew;
    type = BeachLoungerType::BeachLoungerTypeBeachLoungerSimple;
}

BeachLounger::BeachLounger(BeachLounger::BeachLoungerType newType) {
    number = nextNr++;
    condition = conditionType::conditionNew;
    type = newType;
}

unsigned short BeachLounger::getNumber()
{
    return number;
}

BeachLounger::conditionType BeachLounger::getCondition()
{
    return condition;
}

QString BeachLounger::getConditionText()
{
    QString outString;
    switch(condition){
    case conditionNew:
        outString = "Zustand: neu";
        break;
    case conditionAsGoodAsNew:
        outString = "Zustand: zu gut wie neu";
        break;
    case conditionType::conditionUsed:
        outString = "Zustand: gebraucht";
        break;
    case conditionType::conditionWorn:
        outString = "Zustand: abgenutzt";
        break;
    case conditionType::conditionDefective:
        outString = "Zustand: defekt";
        break;
    case conditionType::conditionDiscarded:
        outString = "Zustand: abgelegt";
        break;
    case conditionUnknown:
        outString = "Zustand: unbekannt";
        break;
    }

    return outString;
}

void BeachLounger::setNumber(unsigned short newNumber)
{
    number = newNumber;
}

void BeachLounger::setCondition(conditionType newCondition)
{
    qDebug() << nextNr;
    condition = newCondition;
}

BeachLounger::BeachLoungerType BeachLounger::getType()
{
    return type;
}

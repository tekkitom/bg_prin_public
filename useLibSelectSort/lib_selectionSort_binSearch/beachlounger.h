#ifndef BEACHLOUNGER_H
#define BEACHLOUNGER_H

#include <QDebug>

class BeachLounger
{
public:

    enum conditionType {conditionNew, conditionAsGoodAsNew, conditionUsed,
                      conditionWorn, conditionDefective, conditionDiscarded, conditionUnknown = -1};
    enum BeachLoungerType {BeachLoungerTypeBeachLoungerSimple, BeachLoungerTypeBeachLoungerLuxury, BeachLoungerTypeBeachLoungerWidthUmbrella,
                    BeachLoungerTypeBeachLoungerWidthService, BeachLoungerTypeBeachLoungerWidthUmbrellaAndService, BeachLoungerTypeUnknown = -1};
    BeachLounger();
    BeachLounger(BeachLounger::BeachLoungerType newType);

    unsigned short getNumber();
    BeachLoungerType getType();
    conditionType getCondition();
    void setCondition(conditionType newCondition);
    QString getConditionText();

    void setNumber(unsigned short newNumber);

private:
    unsigned short number;
    static unsigned short nextNr;
    conditionType condition;
    BeachLoungerType type;
};

#endif // BEACHLOUNGER_H

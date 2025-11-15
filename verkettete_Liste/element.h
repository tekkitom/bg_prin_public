#ifndef ELEMENT_H
#define ELEMENT_H

#include <QString>

class Entry
{
public:
    Entry();

    QString getName();
    void setName(QString value);
    QString getTelNr();
    void setTelNr(QString value);

    Entry *getNext() const;
    void setNext(Entry *value);

    // Entry *getPrevious() const;
    // void setPrevious(Entry *newPrevious);

private:
    QString name;
    QString telNr;

    Entry *next;
    // Entry *previous;
};

#endif // ELEMENT_H

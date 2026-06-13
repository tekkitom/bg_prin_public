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

    std::shared_ptr<Entry> getNext() const;
    void setNext(std::shared_ptr<Entry> value);

    std::shared_ptr<Entry> getPrevious() const;
    void setPrevious(std::shared_ptr<Entry> newPrevious);

private:
    QString name;
    QString telNr;

    std::shared_ptr<Entry> next;
    std::shared_ptr<Entry> previous;
};

#endif // ELEMENT_H

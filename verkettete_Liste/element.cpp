#include "element.h"

Entry::Entry()
{
    // next = nullptr;
    // previous = nullptr;
}

QString Entry::getTelNr()
{
    return telNr;
}

void Entry::setTelNr(QString value)
{
    telNr = value;
}

std::shared_ptr<Entry> Entry::getNext() const
{
    return next;
}

void Entry::setNext(std::shared_ptr<Entry> value)
{
    next = value;
}

std::shared_ptr<Entry> Entry::getPrevious() const
{
    return previous;
}

void Entry::setPrevious(std::shared_ptr<Entry> newPrevious)
{
    previous = newPrevious;
}

QString Entry::getName()
{
    return name;
}

void Entry::setName(QString value)
{
    name = value;
}

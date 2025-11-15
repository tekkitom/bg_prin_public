#include "element.h"

Entry::Entry()
{
    next = nullptr;
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

Entry *Entry::getNext() const
{
    return next;
}

void Entry::setNext(Entry *value)
{
    next = value;
}

// Entry *Entry::getPrevious() const
// {
//     return previous;
// }

// void Entry::setPrevious(Entry *newPrevious)
// {
//     previous = newPrevious;
// }

QString Entry::getName()
{
    return name;
}

void Entry::setName(QString value)
{
    name = value;
}

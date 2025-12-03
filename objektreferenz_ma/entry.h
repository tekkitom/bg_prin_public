#ifndef ENTRY_H
#define ENTRY_H

class Entry
{
public:
    Entry();

    int getValue() const;
    void setValue(int newValue);

protected:
    int value;///< Dummy-Eintrag für Demo-Programm
};

#endif // ENTRY_H

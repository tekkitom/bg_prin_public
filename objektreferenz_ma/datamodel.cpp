#include "datamodel.h"

DataModel::DataModel() {
    for(int i = 0; i < 20; i++)
        entryAray[i] = nullptr;
}

/**
 * @brief Erstellt einen Eintrag und fügt ihn an der Position pos ein.
 * @param pos Position zum Einfügen
 * @param val Inhalt/ Datum zum Einfügen
 *
 * Die Methode prüft, ob die Position pos noch leer ist (nullptr), wenn ja
 * erstellt sie ein Objekt von Entry und fügt den Inhalt dort ein.
 * Anschließend fügt sie das Objekt in die Reeferenz ein.
 *
 * Falls die Position bereits belegt ist, wird nichts angelegt.
 */
void DataModel::insertEntry(int pos, int val){

}

/**
 * @brief Löscht einen Eintrag an der Position
 * @param pos Position zum Löschen
 */
void DataModel::removeEntry(int pos){

}

/**
 * @brief Sucht einen Eintrag nach Position und gibt den Inhalt zurück.
 * @param pos Position zur Suche
 * @return Wert an der Position (0, wenn leer)
 */
int DataModel::findEntryPos(int pos){

}

/**
 * @brief sucht einen Eintrag nach Datum (Inhalt) und gibt die erste Position mit dem Datum zurück.
 * @param val Inhalt/Datum zum suchen
 * @return Pos mit dem Inhalt, wenn nichst gefunden wird, wird -1 zurückgegeben.
 */
int DataModel::findEntryVal(int val){

}

/**
 * @brief hängt einen Eintrag hinten an.
 * @param val Datum (Inhalt) für Entry-Objekt
 * @return true = war erfolgreich
 *
 * Die Methode verwaltet eine Warteschlange (fifo).
 * Am Anfang der Schlange steht der erste Eintrag, am Ende der letzte.
 * Wenn vorne ein Eintrag entnommen wird, rutschen alle Übrigen automatisch auf.
 * Leere Positionen werden mit nullptr gefüllt (dummy-Eintrag)
 *
 * Beim Anfügen wird die Warteschlange gefüllt, bis sie voll ist.
 * Wenn Die Warteschlange voll ist, wird nichts mehr angehängt.
 */
bool DataModel::appendEntryBack(int val)
{

}


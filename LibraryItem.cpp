#include "LibraryItem.h"
LibraryItem::LibraryItem(string t) : title(t), isCheckedOut(false), dueDate("") {}
void LibraryItem::checkOut(const string& date) { isCheckedOut = true; dueDate = date; }
void LibraryItem::returnItem() { isCheckedOut = false; dueDate = ""; }
void LibraryItem::renewItem(int extraDays) { dueDate += " + " + to_string(extraDays) + " days"; }
void LibraryItem::markAsLost() { isCheckedOut = false; dueDate = "LOST"; }

// BookItem.h
#ifndef BOOKITEM_H
#define BOOKITEM_H
#include "LibraryItem.h"
#include <string>
using namespace std;

class BookItem : public LibraryItem {
private:
    string author;
    string isbn;

public:
    BookItem(string t, string a, string i);
    void printDetails() const override;
    void calculateLateFees(int daysOverdue) const;
};

#endif

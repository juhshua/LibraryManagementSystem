#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <string>
using namespace std;

class LibraryItem {
protected:
    string title;
    bool isCheckedOut;
    string dueDate;

public:
    LibraryItem(string t);
    virtual void checkOut(const string& date);
    virtual void returnItem();
    virtual void renewItem(int extraDays);
    virtual void markAsLost();
    virtual void printDetails() const = 0;
    virtual ~LibraryItem() {}
};

#endif

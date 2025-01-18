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

#ifndef PATRONRECORD_H
#define PATRONRECORD_H
#include <vector>
#include "BookItem.h"
using namespace std;

class PatronRecord {
private:
    vector<BookItem*> checkedOutBooks;

public:
    void addBook(BookItem* book);
    void removeBook(BookItem* book);
    void listCheckedOutBooks() const;
};

#endif

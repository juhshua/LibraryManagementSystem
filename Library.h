#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "BookItem.h"
#include "Patron.h"
using namespace std;

class Library {
private:
    vector<BookItem> books;
    vector<Patron> patrons;

public:
    void addBook(const BookItem& book);
    void addPatron(const Patron& patron);
    void searchBooksByTitle(const string& title) const;
    void borrowBook(const string& isbn, Patron& patron);
};

#endif

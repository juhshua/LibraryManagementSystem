#include "Library.h"
#include <iostream>
using namespace std;
void Library::addBook(const BookItem& book) { books.push_back(book); }
void Library::addPatron(const Patron& patron) { patrons.push_back(patron); }
void Library::searchBooksByTitle(const string& title) const {
    cout << "Searching for books titled '" << title << "':" << endl;
    for (const auto& book : books) {
        if (book.getTitle() == title) {
            book.printDetails();
        }
    }
}
void Library::borrowBook(const string& isbn, Patron& patron) {
    for (auto& book : books) {
        if (book.getISBN() == isbn && !book.getIsCheckedOut()) {
            book.checkOut("2025-01-20");
            cout << "Book borrowed successfully!" << endl;
            return;
        }
    }
    cout << "Book not available for borrowing." << endl;
}

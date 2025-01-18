#include "PatronRecord.h"
#include <algorithm>
#include <iostream>
using namespace std;
void PatronRecord::addBook(BookItem* book) { checkedOutBooks.push_back(book); }
void PatronRecord::removeBook(BookItem* book) { checkedOutBooks.erase(remove(checkedOutBooks.begin(), checkedOutBooks.end(), book), checkedOutBooks.end()); }
void PatronRecord::listCheckedOutBooks() const {
    cout << "Checked Out Books:" << endl;
    for (const auto& book : checkedOutBooks) {
        book->printDetails();
    }
}

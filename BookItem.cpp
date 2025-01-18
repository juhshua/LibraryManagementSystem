#include "BookItem.h"
#include <iostream>
using namespace std;
BookItem::BookItem(string t, string a, string i) : LibraryItem(t), author(a), isbn(i) {}
void BookItem::printDetails() const {
    cout << "Book Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Status: " << (isCheckedOut ? "Checked Out" : "Available") << endl;
}
void BookItem::calculateLateFees(int daysOverdue) const { cout << "Late Fee: " << daysOverdue * 5 << " currency units." << endl; }

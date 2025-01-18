#include "Patron.h"
Patron::Patron(string n, string cardNumber) : name(n), libraryCardNumber(cardNumber) {}
string Patron::getName() const { return name; }
string Patron::getCardNumber() const { return libraryCardNumber; }
void Patron::updateContactInfo(const string& newContactInfo) { libraryCardNumber = newContactInfo; }
bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const { return currentBorrowedCount < maxLimit; }

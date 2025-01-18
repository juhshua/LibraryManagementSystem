#ifndef PATRON_H
#define PATRON_H
#include <string>
using namespace std;

class Patron {
private:
    string name;
    string libraryCardNumber;

public:
    Patron(string n, string cardNumber);
    string getName() const;
    string getCardNumber() const;
    void updateContactInfo(const string& newContactInfo);
    bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const;
};

#endif

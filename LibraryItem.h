#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <string>
using namespace std;

class LibraryItem {
protected:
    string title;
    std::string ISBN;
    bool isCheckedOut;
    string dueDate;

public:
    // Getter methods
    std::string getTitle() const {
        return title;
    }

    std::string getISBN() const {
        return ISBN;
    }

    bool getIsCheckedOut() const {
        return isCheckedOut;
    }

    LibraryItem(string t);
    virtual void checkOut(const string& date);
    virtual void returnItem();
    virtual void renewItem(int extraDays);
    virtual void markAsLost();
    virtual void printDetails() const = 0;
    virtual ~LibraryItem() {}
};


#endif

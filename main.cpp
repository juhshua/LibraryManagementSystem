#include "Library.h"
#include "BookItem.h"
#include "Patron.h"
#include <iostream>
using namespace std;

int main() {
    Library library;

    BookItem book1("Intro to Object-Oriented Programming", "Ohikere Joshua", "201203063");
    Patron patron1("Ali Emmanuel", "18012025");

    library.addBook(book1);
    library.addPatron(patron1);

    library.searchBooksByTitle("Intro to Object-Oriented Programming");
    library.borrowBook("201203063", patron1);

    return 0;
}

#include "Book.h"
Book::Book(string t, string a, string i) : title(t), author(a), isbn(i) {}
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
void Book::setTitle(const string& t) { title = t; }
void Book::setAuthor(const string& a) { author = a; }
void Book::setISBN(const string& i) { isbn = i; }

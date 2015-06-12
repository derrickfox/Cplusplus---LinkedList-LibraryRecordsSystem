/*
 Program: Project 3
 Description: Library Records System using Pointers
 Course: CMSC230 CRN 23267
 Student:  Derrick Fox
 Professor: Greg Grinberg
 Original Due Date: 11/02/14
 */

#include "Book.h"
using namespace std;

// Create our Book object that includes a pointer
Book::Book(string t, string a, int ident, int y):next(NULL)
{
    title = t;
    author = a;
    ID = ident;
    year = y;
}

// Overloaded out stream just for testing purposes. 

/*
ostream& operator<<(ostream& os, const Book& c)
{
    return os << "Title: " << c.title << "  Author: " << c.author << "  ID: " << c.ID << "  Year Published: " << c.year << endl;
}
*/
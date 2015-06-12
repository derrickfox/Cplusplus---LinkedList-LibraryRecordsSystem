/*
 Program: Project 3
 Description: Library Records System using Pointers
 Course: CMSC230 CRN 23267
 Student:  Derrick Fox
 Professor: Greg Grinberg
 Original Due Date: 11/02/14
 */

#ifndef __LibraryList__Book__
#define __LibraryList__Book__

//#include <stdio.h>
#include <iostream>
#include <string>

class Book
{
    friend class List;
    // JUST FOR TESTING ///////////////////////////////////////////////
    friend std::ostream& operator<<(std::ostream& os, const Book& c);
    ///////////////////////////////////////////////////////////////////
    
public:
    Book(std::string title, std::string author, int ID, int year);
    
    
private:
    std::string title;
    std::string author;
    int ID;
    int year;
    Book* next;
};

#endif /* defined(__LibraryList__Book__) */

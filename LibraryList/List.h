/*
 Program: Project 3
 Description: Library Records System using Pointers
 Course: CMSC230 CRN 23267
 Student:  Derrick Fox
 Professor: Greg Grinberg
 Original Due Date: 11/02/14
 */

#ifndef __LibraryList__List__
#define __LibraryList__List__

//#include <stdio.h>
#include "Book.h"
#include <fstream>


class List
{
public:
    List();
    void addToHead(const std::string&, const std::string&, int, int);
    void printList(std::ofstream& outIT);
    void insert(const std::string&, const std::string&, int, int);
    void searchList();
    
    
private:
    Book* head;
    int size;
    
};

#endif /* defined(__LibraryList__List__) */

/*
 Program: Project 3
 Description: Library Records System using Pointers
 Course: CMSC230 CRN 23267
 Student:  Derrick Fox
 Professor: Greg Grinberg
 Original Due Date: 11/02/14
 */

#include "List.h"
using namespace std;

// List constructor
List::List():head(0),size(0)
{}

// Method to add first object of the list if need be.
void List::addToHead(const string& title, const string& author, int ID, int year)
{
    Book* newOne = new Book(title, author, ID, year);
    
    if (head == 0) {
        head = newOne;
    }
    else
    {
        newOne->next = head;
        head = newOne;
    }
    size++;
}

// Method to print the entire list of Books in the library system.
void List::printList(ofstream& outIT)
{
    Book* current = head;

    while (current !=0)
    {
        cout << current->title << "  "<< current->author << "  " << current->ID << "  " << current->year << endl;
        
        outIT << current->title << "  "<< current->author << "  " << current->ID << "  " << current->year << endl;
        
        current = current->next;
    }
}

// Method to search the list by the year the book was published and if found then returns the titles of those books.
void List::searchList()
{
    Book* current = head;
    int y;
    cout << "What year was the book published?" << endl;
    cin >> y;
    
    while (current != 0)
    {
        if (!(current->year == y))
        {
            current = current->next;
        }
        else if (current->year == y)
        {
            cout << current->title << endl;
            break;
        }
        else
            cout << "Not found in list";
    }
}

// Method to create and insert books into the list.
void List::insert(const string& title, const string& author, int ID, int year)
{
    Book* newNode = new Book(title, author, ID, year);
    
    // Case 1 - Empty List
    if (head == 0)
    {
        head = newNode;
    }
    else
    {
        Book* current = head;
        Book* trail = 0;
        
        // Traverse list to find insert location.
        while (current !=0)
        {
            if (current->year >= newNode->year)
            {
                break;
            }
            else
            {
                trail = current;
                current = current->next;
            }
        }
        // Case 2 - Insert at the head of list
        if (current == head)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            // Case 3 - Insert after the head of list
            newNode->next = current;
            trail->next = newNode;
        }
    }
    size++;
}
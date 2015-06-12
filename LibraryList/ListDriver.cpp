/*
 Program: Project 3
 Description: Library Records System using Pointers
 Course: CMSC230 CRN 23267
 Student:  Derrick Fox
 Professor: Greg Grinberg
 Original Due Date: 11/02/14
 */

//#include <stdio.h>

#include "List.h"
#include <iostream>
#include <fstream>  
using namespace std;

string CommandIt(string);


int main()
{
    // Opens input and output files.
    ofstream outFile;
    outFile.open("Output.txt");
    
    ifstream inFile;
    inFile.open("Input.txt");
    
    // Creates a list by pointing to the first memory location of said list.
    List* list = new List();
    
    // Declares variables to hold file values and commands.
    string title;
    string author;
    int ID = 0;
    int year = 0;
    string userCommand = "";
    string systemCommand = "";
    
    // While-loop traverses the list and creates a new Book object and inserts it
    // into the list for each line found in the input file.
    while (!inFile.eof())
    {
        inFile >> title >> author >> ID >> year;
        //cout << title << " " << author << " " << ID << "  " << year << endl;
        list->insert(title, author, ID, year);
        outFile << title << " " << author << " " << ID << "  " << year << endl;
    }
    

    // This is the menus system
    // I feel like I could have done this better
    // but I had run out of time.
    cout << "Library System:" << endl;
    cout << "To Search enter 'S'" << endl;
    cout << "To Print the entire list enter 'P'" << endl;
    cout << "To Quit enter 'Q'" << endl;
    cin >> userCommand;
    
    systemCommand = CommandIt(userCommand);
    if (systemCommand == "quitIt") {
        exit(0);
    }
    else if (systemCommand == "searchForBook")
    {
        list->searchList();
    }
    else if (systemCommand == "printBook")
    {
        list->printList(outFile);
    }
    return 0;
}

// Again I feel like I could have done
// this menu system better but I could
// use some advice on how best to do that.
string CommandIt(string s)
{
    if (s == "Q")
    {
        return "quitIt";
    }
    else if (s == "S")
    {
        return "searchForBook";
    }
    else if (s == "P")
    {
        return "printBook";
    }
    else
        return "nonthing";
};


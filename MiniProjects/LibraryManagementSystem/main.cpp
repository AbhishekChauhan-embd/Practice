#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<cstdio>

using namespace std;

class ab_lms_Book {
        int bookID;
        string title;
        string author;
        bool isIssued;
    
    public:

        void ab_lms_addBook();
        void ab_lms_removeBook();
        void ab_lms_displayBook();
        void ab_lms_issueBook();
        void ab_lms_returnBook();

        int ab_lms_getBookId();
        bool ab_lms_getStatus();
        void ab_lms_setStatus(bool status);
};

void ab_lms_displayMenu()
{
    cout << "-----------------------------------" << endl;
    cout << "Welcome to the Library Management System!" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Add a Book" << endl;
    cout << "2. Remove a Book" << endl;
    cout << "3. Display Books" << endl;
    cout << "4. Search for a Book" << endl;
    cout << "5. Issue a Book" << endl;
    cout << "6. Return a Book" << endl;
    cout << "7. Add a User " << endl;
    cout << "8. Remove a User" << endl;
    cout << "9. Display Users" << endl;
}

int ab_lms_getChoice()
{
    int choice;
    cout << "Please enter your choice: ";
    cin >> choice;

    return choice;
}

void ab_lms_HandleMenuSelection(int choice){
    ab_lms_Book book;
    switch(choice)
    {
        case 1:
            cout << "You chose to add a book." << endl;
            book.ab_lms_addBook();
            break;
        case 2:
            cout << "You chose to remove a book." << endl;
            book.ab_lms_removeBook();
            break;
        case 3:
            cout << "You chose to display books." << endl;
            book.ab_lms_displayBook();
            break;
        case 4:
            cout << "You chose to search for a book." << endl;
            break;
        case 5:
            cout << "You chose to issue a book." << endl;
            break;
        case 6:
            cout << "You chose to return a book." << endl;
            break;
        case 7:
            cout << "You chose to add a user." << endl;
            break;
        case 8:
            cout << "You chose to remove a user." << endl;
            break;
        case 9:
            cout << "You chose to display users." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

int main()
{
    int choice = 0;
    ab_lms_displayMenu();
    choice = ab_lms_getChoice();
    ab_lms_HandleMenuSelection(choice);
    return 0;
}

void ab_lms_Book::ab_lms_addBook()
{
    fstream file("books.txt", ios::app);    
    cout << "\nEnter book ID: ";
    cin >> bookID;
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter book author: ";
    getline(cin, author);
    isIssued = false;

    file << bookID << "|" << title << "|" << author << "|" << isIssued << endl;
    cout << "Book added successfully!" << endl;
}

void ab_lms_Book::ab_lms_removeBook()
{
    vector<string> line;
    int index;
    bool isRemoved = false;
    string removedBookInfo, idStr, temp;

    cout << "\nEnter book ID to remove: ";
    cin >> idStr;
    cin.ignore();
    
    ifstream file("books.txt");

    while(getline(file, temp))
    {        
        line.push_back(temp);

    }
    file.close();

    ofstream outFile("books.txt", ios::trunc);

    for(index = 0; index < line.size(); index++)    {
        string temp = line[index];  
        int pos = temp.find("|");

        cout << temp.substr(0, pos) << endl;
        string bookIdStr = temp.substr(0, pos);

        if(bookIdStr != idStr)
        {
            outFile << temp << endl;
        }else
        {
            isRemoved = true;
            removedBookInfo = temp;
        }
    }
    if(!isRemoved)
    {
        cout << "Book not found." << endl;
    }
    else
    {
        cout << "Book removed successfully!" << endl;
        cout << "Removed Book Info: " << removedBookInfo << endl;
    }   

}

void ab_lms_Book::ab_lms_displayBook()
{
    ifstream file("books.txt");
    string line;

    cout << "\nBooks in the library:" << endl;
    cout << "---------------------" << endl;
    while(getline(file, line))
    {
        cout << line << endl;
    }
    cout << "---------------------\n" << endl;
    file.close();
}
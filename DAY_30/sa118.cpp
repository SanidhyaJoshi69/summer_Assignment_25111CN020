#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    int bookId;
    string bookName;
    string author;
    bool issued;

public:
    void addBook()
    {
        cout << "\n--- Adding a New Book ---\n";
        cout << "Book ID    : ";
        cin >> bookId;
        cin.ignore();

        cout << "Book Title : ";
        getline(cin, bookName);

        cout << "Author     : ";
        getline(cin, author);

        issued = false;
        cout << "-> Great! '" << bookName << "' has been added to the library.\n";
    }

    void issueBook()
    {
        if (issued)
        {
            cout << "-> Sorry, this book is already checked out by someone else.\n";
        }
        else
        {
            issued = true;
            cout << "-> Success! You've checked out '" << bookName << "'.\n";
        }
    }

    void returnBook()
    {
        if (!issued)
        {
            cout << "-> It looks like this book was already in the library.\n";
        }
        else
        {
            issued = false;
            cout << "-> Thank you for returning '" << bookName << "'.\n";
        }
    }

    void displayBook()
    {
        cout << "\n--- Book Information ---\n";
        cout << "ID     : " << bookId << "\n";
        cout << "Title  : " << bookName << "\n";
        cout << "Author : " << author << "\n";
        cout << "Status : " << (issued ? "Currently checked out" : "Available to borrow") << "\n";
    }
};

int main()
{
    Library book;
    int choice;

    cout << "Welcome to your personal Mini Library system!\n";

    do
    {
        cout << "\n----------------------------------------\n";
        cout << "What would you like to do?\n";
        cout << "1. Add a new book\n";
        cout << "2. Check out a book\n";
        cout << "3. Return a book\n";
        cout << "4. See book details\n";
        cout << "5. Exit the system\n";
        cout << "Your selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            book.addBook();
            break;

        case 2:
            book.issueBook();
            break;

        case 3:
            book.returnBook();
            break;

        case 4:
            book.displayBook();
            break;

        case 5:
            cout << "Closing the library system. Happy reading!\n";
            break;

        default:
            cout << "-> I didn't quite catch that. Please choose an option from 1-5.\n";
        }

    } while (choice != 5);

    return 0;
}
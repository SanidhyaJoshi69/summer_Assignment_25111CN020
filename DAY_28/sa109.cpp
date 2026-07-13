#include <iostream>
#include <string>
#include <vector>
#include <limits> // Required for input stream cleanup

using namespace std;

// Using a clear, descriptive class name
class Book {
private:
    int id;
    string title;
    string author;

public:
    // Human-readable function name
    void captureBookDetails() {
        cout << "\n--- Enter New Book Information ---" << endl;
        
        cout << "Book ID: ";
        while (!(cin >> id)) {
            cout << "Invalid input. Please enter a numeric ID: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer

        cout << "Title: ";
        getline(cin, title);

        cout << "Author: ";
        getline(cin, author);
        
        cout << "Book registered successfully." << endl;
    }

    void displaySummary() const {
        cout << " [" << id << "] " << title << " | Authored by: " << author << endl;
    }
};

// Extracted the menu logic to keep main() clean
void showMenu() {
    cout << "\n==========================================" << endl;
    cout << "      Library Management System           " << endl;
    cout << "==========================================" << endl;
    cout << "1. Add a new book to the catalog" << endl;
    cout << "2. View all catalog entries" << endl;
    cout << "3. Exit" << endl;
    cout << "Selection: ";
}

int main() {
    const int MAX_CAPACITY = 10;
    Book libraryCatalog[MAX_CAPACITY];
    int totalBooks = 0;
    int choice = 0;

    while (true) {
        showMenu();
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid menu number (1-3)." << endl;
            continue;
        }

        if (choice == 3) {
            cout << "Closing system. Goodbye!" << endl;
            break;
        }

        switch (choice) {
            case 1:
                if (totalBooks < MAX_CAPACITY) {
                    libraryCatalog[totalBooks].captureBookDetails();
                    totalBooks++;
                } else {
                    cout << "System Alert: Library storage is full!" << endl;
                }
                break;

            case 2:
                if (totalBooks == 0) {
                    cout << "The catalog is currently empty." << endl;
                } else {
                    cout << "\n--- Current Library Catalog ---" << endl;
                    for (int i = 0; i < totalBooks; i++) {
                        libraryCatalog[i].displaySummary();
                    }
                }
                break;

            default:
                cout << "Invalid selection, please try again." << endl;
        }
    }

    return 0;
}
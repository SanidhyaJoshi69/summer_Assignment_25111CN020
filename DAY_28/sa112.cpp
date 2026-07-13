#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Contact {
private:
    string name;
    string phoneNumber;

    // Helper to handle input streams safely
    void clearInputBuffer() {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

public:
    Contact() : name(""), phoneNumber("") {}

    void create() {
        cout << "\n--- Register New Contact ---" << endl;
        cout << "Name: ";
        getline(cin >> ws, name); // 'ws' handles preceding whitespace
        
        cout << "Phone: ";
        getline(cin, phoneNumber);
        
        cout << "Contact saved successfully." << endl;
    }

    void display() const {
        if (name.empty()) {
            cout << "No contact information found." << endl;
            return;
        }
        cout << "\n--- Contact Information ---" << endl;
        cout << "Name  : " << name << "\nPhone : " << phoneNumber << endl;
    }

    void update() {
        if (name.empty()) {
            cout << "No contact to update." << endl;
            return;
        }
        cout << "\n--- Update Details ---" << endl;
        cout << "New Name: ";
        getline(cin >> ws, name);
        
        cout << "New Phone: ";
        getline(cin, phoneNumber);
        
        cout << "Contact updated successfully." << endl;
    }

    void remove() {
        if (name.empty()) {
            cout << "No contact to remove." << endl;
            return;
        }
        name.clear();
        phoneNumber.clear();
        cout << "Contact deleted permanently." << endl;
    }
};

int main() {
    Contact personalContact;
    int choice = 0;

    while (choice != 5) {
        cout << "\n--- Contact Manager ---\n"
             << "1. Add\n"
             << "2. View\n"     
             << "3. Update\n"
             << "4. Delete\n"
             << "5. Exit\n"
             << "Choice: "; }
    }
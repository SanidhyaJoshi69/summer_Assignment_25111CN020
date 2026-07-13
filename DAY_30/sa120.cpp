#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Using global arrays for this version; in larger projects, we'd use a Class/Vector
int roll[100];
string name[100];
float marks[100];
int n = 0;

void addStudent()
{
    cout << "\n--- Adding a New Student Record ---\n";
    cout << "Roll Number : ";
    cin >> roll[n];
    cin.ignore();

    cout << "Student Name: ";
    getline(cin, name[n]);

    cout << "Marks       : ";
    cin >> marks[n];

    n++;
    cout << "-> Great! " << name[n - 1] << " has been added to the records.\n";
}

void displayStudents()
{
    if (n == 0)
    {
        cout << "\n-> It looks like the record is empty right now.\n";
        return;
    }

    cout << "\n--- Current Student Records ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": " << name[i] 
             << " | Roll: " << roll[i] 
             << " | Marks: " << marks[i] << "\n";
    }
}

void searchStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter the Roll Number you're looking for: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            cout << "\nFound it!\n";
            cout << "Roll Number : " << roll[i] << "\n"
                 << "Name        : " << name[i] << "\n"
                 << "Marks       : " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "-> Sorry, I couldn't find a student with that roll number.\n";
}

void highestMarks()
{
    if (n == 0)
    {
        cout << "\n-> No records to analyze yet.\n";
        return;
    }

    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (marks[i] > marks[index])
            index = i;
    }

    cout << "\n--- Top Performer ---\n";
    cout << name[index] << " is leading with " << marks[index] << " marks.\n";
}

int main()
{
    int choice;
    cout << "Welcome to the Student Management Portal!\n";

    do
    {
        cout << "\n----------------------------------------\n";
        cout << "1. Add a new student\n";
        cout << "2. View all student records\n";
        cout << "3. Search for a student\n";
        cout << "4. See the top performer\n";
        cout << "5. Exit the system\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: addStudent(); break;
        case 2: displayStudents(); break;
        case 3: searchStudent(); break;
        case 4: highestMarks(); break;
        case 5: cout << "\nGoodbye! Have a great day!\n"; break;
        default: cout << "\n-> That's not a valid option. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
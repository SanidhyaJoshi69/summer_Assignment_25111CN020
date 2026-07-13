#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int n, choice;
    int roll[100];
    string name[100];
    float marks[100];

    cout << "Hello! Let's set up your class records.\n";
    cout << "How many students will you be entering today? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Student " << i + 1 << " ---" << endl;
        cout << "Roll Number : ";
        cin >> roll[i];
        cin.ignore(); // Clear the buffer

        cout << "Name        : ";
        getline(cin, name[i]);

        cout << "Marks       : ";
        cin >> marks[i];
    }

    do
    {
        cout << "\n----------------------------------------\n";
        cout << "What would you like to do?\n";
        cout << "1. See all student records\n";
        cout << "2. Search for a specific student\n";
        cout << "3. See who has the highest marks\n";
        cout << "4. I'm finished\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nHere are all the student records:\n";
            for (int i = 0; i < n; i++)
            {
                cout << "-> " << name[i] << " (Roll: " << roll[i] << ") scored " << marks[i] << endl;
            }
            break;

        case 2:
        {
            int searchRoll;
            bool found = false;
            cout << "Enter the Roll Number you are looking for: ";
            cin >> searchRoll;

            for (int i = 0; i < n; i++)
            {
                if (roll[i] == searchRoll)
                {
                    cout << "\nFound them! Here are the details:\n";
                    cout << "Roll Number: " << roll[i] << "\nName: " << name[i] << "\nMarks: " << marks[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Oops, I couldn't find a student with that roll number.\n";
            break;
        }

        case 3:
        {
            int topIndex = 0;
            for (int i = 1; i < n; i++)
            {
                if (marks[i] > marks[topIndex]) topIndex = i;
            }
            cout << "\nThe top performer is " << name[topIndex] 
                 << " with " << marks[topIndex] << " marks!\n";
            break;
        }

        case 4:
            cout << "All done! Hope your record keeping went smoothly. Goodbye!\n";
            break;

        default:
            cout << "Hmm, that's not a valid option. Could you try again?\n";
        }

    } while (choice != 4);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mainString, tempString;
    int choice;

    cout << "Hello! Let's work with some text today.\n";
    cout << "First, please type the text you'd like to work with: ";
    getline(cin, mainString);

    do
    {
        cout << "\n----------------------------------------\n";
        cout << "What would you like to do with your text?\n";
        cout << "1. See my current text\n";
        cout << "2. How long is it?\n";
        cout << "3. Add more text to the end\n";
        cout << "4. Compare it to something else\n";
        cout << "5. I'm all done!\n";
        cout << "Selection: ";
        cin >> choice;

        // Clear the buffer to prevent issues with getline() after cin >> choice
        cin.ignore(); 

        switch (choice)
        {
        case 1:
            cout << "-> Your text is currently: \"" << mainString << "\"\n";
            break;

        case 2:
            cout << "-> Your text is " << mainString.length() << " characters long.\n";
            break;

        case 3:
            cout << "What would you like to add? ";
            getline(cin, tempString);
            mainString += tempString;
            cout << "-> Done! Your new text is: \"" << mainString << "\"\n";
            break;

        case 4:
            cout << "Enter the text you want to compare it with: ";
            getline(cin, tempString);
            if (mainString == tempString)
                cout << "-> Great news! The strings are an exact match.\n";
            else
                cout << "-> Those two strings are not the same.\n";
            break;

        case 5:
            cout << "It was a pleasure helping you with your text. Goodbye!\n";
            break;

        default:
            cout << "-> I'm sorry, I didn't recognize that choice. Could you try again?\n";
        }

    } while (choice != 5);

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2, result;

    cout << "\nHello there! Welcome to your personal calculator.\n";

    do
    {
        // A softer, more conversational menu
        cout << "\n----------------------------------------\n";
        cout << "What would you like to do today?\n";
        cout << "1. Add some numbers\n";
        cout << "2. Subtract them\n";
        cout << "3. Multiply them\n";
        cout << "4. Divide them\n";
        cout << "5. Exit the calculator\n";
        cout << "Let me know your choice (1-5): ";
        cin >> choice;

        // We only want to ask for numbers if they actually picked a math operation
        if (choice >= 1 && choice <= 4) {
            cout << "Awesome! Please enter your two numbers separated by a space: ";
            cin >> num1 >> num2;
        }

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            cout << "-> The magic sum is: " << result << "\n";
            break;

        case 2:
            result = num1 - num2;
            cout << "-> The difference is: " << result << "\n";
            break;

        case 3:
            result = num1 * num2;
            cout << "-> Multiplied together, you get: " << result << "\n";
            break;

        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "-> Divided out, that gives you: " << result << "\n";
            }
            else
            {
                // A much friendlier error message
                cout << "-> Oops! Dividing by zero breaks the universe. Let's try something else!\n";
            }
            break;

        case 5:
            cout << "\nThanks for crunching numbers with me. Have a wonderful day!\n";
            break;

        default:
            cout << "-> Hmm, I didn't quite catch that. Please pick a number from 1 to 5.\n";
        }

    } while (choice != 5);

    return 0;
}
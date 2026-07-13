#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, i, key;
    bool found = false;

    cout << "Hi there! Let's work with some numbers.\n";
    cout << "First, how many numbers would you like to store in your list? ";
    cin >> n;

    cout << "Great! Now, go ahead and enter those " << n << " numbers:\n";
    for (i = 0; i < n; i++)
    {
        cout << "  > Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    do
    {
        cout << "\n----------------------------------------\n";
        cout << "What would you like to do with your list?\n";
        cout << "1. See my list\n";
        cout << "2. Calculate the total sum\n";
        cout << "3. Find the average\n";
        cout << "4. Search for a specific number\n";
        cout << "5. I'm done for now!\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Here is your current list: ";
            for (i = 0; i < n; i++)
                cout << arr[i] << (i == n - 1 ? "" : ", ");
            cout << "\n";
            break;

        case 2:
            int totalSum;
            totalSum = 0;
            for (i = 0; i < n; i++) totalSum += arr[i];
            cout << "The total sum is: " << totalSum << "\n";
            break;

        case 3:
            int sumForAvg;
            sumForAvg = 0;
            for (i = 0; i < n; i++) sumForAvg += arr[i];
            cout << "The average is: " << (float)sumForAvg / n << "\n";
            break;

        case 4:
            cout << "Which number are you looking for? ";
            cin >> key;
            found = false;
            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Found it! It's at position " << i + 1 << ".\n";
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Hmm, I couldn't find that number in your list.\n";
            break;

        case 5:
            cout << "All done! Hope that helped. Have a great day!\n";
            break;

        default:
            cout << "Whoops, that wasn't an option. Let's try again.\n";
        }

    } while (choice != 5);

    return 0;
}
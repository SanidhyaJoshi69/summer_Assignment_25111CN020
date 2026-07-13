#include <iostream>
#include <string>
#include <iomanip> // For better price formatting
using namespace std;

class Inventory
{
private:
    int itemCode;
    string itemName;
    int quantity;
    float price;

public:
    void addItem()
    {
        cout << "\n--- Adding a New Item ---\n";
        cout << "Enter Item Code: ";
        cin >> itemCode;
        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, itemName);

        cout << "Enter Quantity in stock: ";
        cin >> quantity;

        cout << "Enter Price per unit: ";
        cin >> price;

        cout << "-> Great! " << itemName << " has been added to the inventory.\n";
    }

    void displayItem()
    {
        cout << "\n--- Current Item Details ---\n";
        cout << "Code     : " << itemCode << "\n";
        cout << "Name     : " << itemName << "\n";
        cout << "Quantity : " << quantity << "\n";
        cout << "Price    : $" << fixed << setprecision(2) << price << "\n";
    }

    void updateQuantity()
    {
        int newQuantity;
        cout << "\nCurrent stock level for " << itemName << " is: " << quantity << "\n";
        cout << "Enter the updated quantity: ";
        cin >> newQuantity;

        quantity = newQuantity;
        cout << "-> Success! The inventory count has been updated.\n";
    }
};

int main()
{
    Inventory item;
    int choice;

    cout << "Welcome to your Inventory Management System!\n";

    do
    {
        cout << "\n----------------------------------------\n";
        cout << "What would you like to do?\n";
        cout << "1. Add a new item\n";
        cout << "2. View current item details\n";
        cout << "3. Update the quantity\n";
        cout << "4. Exit the system\n";
        cout << "Your selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            item.addItem();
            break;

        case 2:
            item.displayItem();
            break;

        case 3:
            item.updateQuantity();
            break;

        case 4:
            cout << "Closing the system. Have a productive day!\n";
            break;

        default:
            cout << "-> Sorry, that's not a valid option. Please choose between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}
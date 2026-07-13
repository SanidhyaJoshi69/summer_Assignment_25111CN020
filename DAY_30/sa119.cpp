#include <iostream>
#include <string>
#include <iomanip> // Included for cleaner currency formatting
using namespace std;

class Employee
{
private:
    int empId;
    string empName;
    string department;
    float salary;

public:
    void addEmployee()
    {
        cout << "\n--- Adding a New Team Member ---\n";
        cout << "Employee ID   : ";
        cin >> empId;
        cin.ignore();

        cout << "Name          : ";
        getline(cin, empName);

        cout << "Department    : ";
        getline(cin, department);

        cout << "Starting Salary: ";
        cin >> salary;

        cout << "-> Perfect! " << empName << " has been added to the system.\n";
    }

    void displayEmployee()
    {
        cout << "\n--- Current Employee Profile ---\n";
        cout << "ID            : " << empId << "\n";
        cout << "Name          : " << empName << "\n";
        cout << "Department    : " << department << "\n";
        cout << "Annual Salary : $" << fixed << setprecision(2) << salary << "\n";
    }

    void updateSalary()
    {
        float newSalary;
        cout << "\nUpdating salary for " << empName << ".\n";
        cout << "Current salary is: $" << fixed << setprecision(2) << salary << "\n";
        cout << "Enter the new annual salary: ";
        cin >> newSalary;

        salary = newSalary;
        cout << "-> Salary has been successfully updated!\n";
    }
};

int main()
{
    Employee emp;
    int choice;

    cout << "Welcome to the Team Management Portal!\n";

    do
    {
        cout << "\n----------------------------------------\n";
        cout << "1. Add a new employee\n";
        cout << "2. View employee details\n";
        cout << "3. Update salary\n";
        cout << "4. Exit\n";
        cout << "What would you like to do? ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            emp.addEmployee();
            break;

        case 2:
            emp.displayEmployee();
            break;

        case 3:
            emp.updateSalary();
            break;

        case 4:
            cout << "Exiting system. Have a great day!\n";
            break;

        default:
            cout << "-> Sorry, that's not a valid option. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
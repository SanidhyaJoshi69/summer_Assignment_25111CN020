#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Ticket {
private:
    string passengerName;
    int age;
    int seatNumber;
    bool isBooked;

    void clearBuffer() {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

public:
    Ticket() : passengerName(""), age(0), seatNumber(0), isBooked(false) {}

    void book() {
        if (isBooked) {
            cout << "Notice: This seat is already reserved." << endl;
            return;
        }

        cout << "\n--- Reservation Process ---" << endl;
        cout << "Passenger Name: ";
        getline(cin >> ws, passengerName); // 'ws' skips leading whitespace

        cout << "Age: ";
        while (!(cin >> age) || age <= 0) {
            cout << "Invalid age. Please enter a valid number: ";
            clearBuffer();
        }

        cout << "Seat Number: ";
        while (!(cin >> seatNumber) || seatNumber <= 0) {
            cout << "Invalid seat. Please enter a valid seat number: ";
            clearBuffer();
        }

        isBooked = true;
        cout << "Reservation confirmed for " << passengerName << "." << endl;
    }

    void display() const {
        if (!isBooked) {
            cout << "No active reservation found." << endl;
            return;
        }

        cout << "\n--- Confirmed Ticket Details ---" << endl;
        cout << "Passenger: " << passengerName << "\nAge      : " << age 
             << "\nSeat     : " << seatNumber << endl;
    }
};
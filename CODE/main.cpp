#include "AirlineBookingManager.h"
#include <iostream>

using namespace std;

int main() {
    AirlineBookingManager manager;
    int choice;

    while (true) {
        system("cls");

        cout << "===================================" << endl;
        cout << "||     CLOUD2GO AIRLINE SYSTEM   ||" << endl;
        cout << "===================================" << endl;
        cout << "[1] Book Flight (Search)         ||" << endl;
        cout << "[2] View Transaction History     ||" << endl;
        cout << "[3] Update Passenger/Seat        ||" << endl;
        cout << "[4] Cancel Booking (Delete)      ||" << endl;
        cout << "[5] Exit                         ||" << endl;
        cout << "===================================" << endl;

        choice = manager.getValidatedInt("Choice: ");

        if (choice == 1) {
            system("cls");
            if (manager.searchByBudget()) {
                char ok;
                cout << "Book now? (Y/N): ";
                cin >> ok;
                if (toupper(ok) == 'Y') {
                    manager.processBooking();
                }
            }
        }
        else if (choice == 2) {
            system("cls");
            manager.viewHistory();
            system("pause");
        }
        else if (choice == 3) {
            system("cls");
            cout << " [1] Update Name\n [2] Update Seat\n Choice: ";
            int sub = manager.getValidatedInt("");
            if (sub == 1) {
                manager.updatePassengerInfo(); 
            }
            else {
                manager.updatePassengerSeat(); 
            }
        }
        else if (choice == 4) {
            manager.cancelBooking();
        }
        else if (choice == 5) break;
    }
    return 0;
}

#ifndef AIRLINEBOOKINGMANAGER_H
#define AIRLINEBOOKINGMANAGER_H
#include <vector>
#include <string>
#include "Flight.h"

using namespace std;

struct BookingRecord {
    string pName;
    int fID;
    int sNum;
};

struct Transaction {
    string passengerName;
    string flightDetails;
    double price;
    int seatNumber;
};

class AirlineBookingManager {
private:
    vector<Flight> flights;
    vector<BookingRecord> history;
    vector<Transaction> transactions; 
    string dbFile = "database.txt";

    void loadData();
    void saveData();

public:
    AirlineBookingManager();

    void showFlights();
    void processBooking();
    bool searchByBudget();
    void updateFlightPrice();
    void updatePassengerInfo();
    void cancelBooking();
    void viewHistory(); 

    int getValidatedInt(string prompt);
    double getValidatedDouble(string prompt);
};
#endif

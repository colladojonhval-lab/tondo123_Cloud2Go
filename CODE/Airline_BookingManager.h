#ifndef AIRLINE_BOOKING_MANAGER_H
#define AIRLINE_BOOKING_MANAGER_H

#include <string>
using namespace std;

struct Flight {
    int flightNumber;
    string origin;
    string destination;
    string country;
    double price;
    int totalSeats;
    int reservedSeats;
    bool seats[6];
};

class Airline_BookingManager {
private:
    Flight flights[5];
    int flightCount;

public:
    Airline_BookingManager();

    void addFlight(Flight f);
    void showFlights();
    void searchByBudget(double budget);
    void processBooking();
};

#endif

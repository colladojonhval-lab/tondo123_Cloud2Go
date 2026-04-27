#include <iostream>
#include <string>
using namespace std;

// Flight Class (Blueprint)
class Flight {
private:
    int flightID;
    string airlineName;
    string origin;
    string destination;
    string departureTime;
    double ticketPrice;
    int availableSeats;

public:
    // Constructor
    Flight(int id, string airline, string from, string to,
           string departure, double price, int seats) {
        flightID = id;
        airlineName = airline;
        origin = from;
        destination = to;
        departureTime = departure;
        ticketPrice = price;
        availableSeats = seats;
    }

    // Display Flight Information
    void displayFlightInfo() const {
        cout << "\n===== FLIGHT INFORMATION =====" << endl;
        cout << "Flight ID: " << flightID << endl;
        cout << "Airline Name: " << airlineName << endl;
        cout << "Origin: " << origin << endl;
        cout << "Destination: " << destination << endl;
        cout << "Departure Time: " << departureTime << endl;
        cout << "Ticket Price: PHP " << ticketPrice << endl;
        cout << "Available Seats: " << availableSeats << endl;
        cout << "==============================\n";
    }
};

int main() {
    int id, seats;
    string airline, origin, destination, departure;
    double price;

    cout << "Enter Flight ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Airline Name: ";
    getline(cin, airline);

    cout << "Enter Origin: ";
    getline(cin, origin);

    cout << "Enter Destination: ";
    getline(cin, destination);

    cout << "Enter Departure Time: ";
    getline(cin, departure);

    cout << "Enter Ticket Price: ";
    cin >> price;

    cout << "Enter Available Seats: ";
    cin >> seats;

    // Create Flight Object using user input
    Flight flight1(id, airline, origin, destination, departure, price, seats);

    // Display entered flight details
    flight1.displayFlightInfo();

    return 0;
}

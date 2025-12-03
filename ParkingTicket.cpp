#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

ParkingTicket::ParkingTicket(const ParkedCar& car, const PoliceOfficer& officer,
                             int minutesPurchased, int minutesParked)
    : car(car), officer(officer),
      minutesPurchased(minutesPurchased), minutesParked(minutesParked) {

    minutesIllegallyParked = minutesParked - minutesPurchased;
    minutesOver = minutesIllegallyParked;

    if (minutesIllegallyParked <= 0) {
        fine = 0;
    } else {
        int hoursOver = (minutesIllegallyParked + 59) / 60; // round up
        fine = 25 + (hoursOver - 1) * 10;
    }
}

double ParkingTicket::getFine() const {
    return fine;
}

void ParkingTicket::printTicket() const {
    cout << "*** Parking Ticket ***" << endl;
    cout << "Officer " << officer.getName()
         << " Badge Number " << officer.getBadgeNumber() << endl;
    cout << "Vehicle License Number: " << car.getLicenseNumber() << endl;
    cout << "Make: " << car.getMake()
         << " Model: " << car.getModel()
         << " Color: " << car.getColor() << endl;
    cout << "Meter Minutes: " << minutesPurchased
         << " Minutes Parked: " << minutesParked << endl;
    cout << "Parking Fee: $" << fixed << setprecision(2) << fine << endl;
    cout << endl;
}

int ParkingTicket::getMinutesIllegallyParked() const { return minutesIllegallyParked; }
int ParkingTicket::getMinutesPurchased() const { return minutesPurchased; }
int ParkingTicket::getMinutesParked() const { return minutesParked; }
int ParkingTicket::getMinutesOver() const { return minutesOver; }

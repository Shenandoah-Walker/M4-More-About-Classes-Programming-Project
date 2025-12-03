#include "ParkingTicket.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

ParkingTicket::ParkingTicket(ParkedCar car, PoliceOfficer officer, int minutesPurchased, int minutesParked) {
  this->car = car;
  this->officer = officer;
  this->minutesPurchased = minutesPurchased;
  this->minutesParked = minutesParked;
  this->minutesIllegallyParked = minutesParked - minutesPurchased;
  this->minutesOver = minutesIllegallyParked;
  this->fine = 25 + (10 * ceil((minutesIllegallyParked - 60) / 60.0));
  }

double ParkingTicket::getFine() const {
  return fine;
}

void ParkingTicket::printTicket() const {
  cout << "*** Parking Ticket ***" << endl;
  cout << "Officer " << officer.getName() << " Badge Number " << officer.getBadgeNumber() << endl;
  cout << "Vehicle License Number: " << car.getLicenseNumber() << endl;
  cout << "Make: " << car.getMake() << " Model: " << car.getModel() << " Color: " << car.getColor() <<
    endl;
  cout << "Meter Minutes: " << minutesPurchased << " Minutes Parked: " << minutesParked << endl;
  cout << "Parking Fee: $" << fixed << setprecision(2) << fine << endl;
}

int ParkingTicket::getMinutesIllegallyParked() const {
  return minutesIllegallyParked;
}

int ParkingTicket::getMinutesPurchased() const {
  return minutesPurchased;
}

int ParkingTicket::getMinutesParked() const {
  return minutesParked;
}

int ParkingTicket::getMinutesOver() const {
  return minutesOver;
}


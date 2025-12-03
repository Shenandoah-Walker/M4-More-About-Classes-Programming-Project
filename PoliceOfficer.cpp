#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <string>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

PoliceOfficer::PoliceOfficer(string name, string badgeNumber) {
  this->name = name;
  this->badgeNumber = badgeNumber;
}

string PoliceOfficer::getName() const {
  return name;
  
}

string PoliceOfficer::getBadgeNumber() const {
  return badgeNumber;
}

bool PoliceOfficer::isExpired(const ParkedCar& car, const ParkingMeter& meter) const {
  return car.getMinutesParked() > meter.getMinutesPurchased();
}

ParkingTicket PoliceOfficer::issueTicket(const ParkedCar& car, const ParkingMeter& meter) const {
  return ParkingTicket(car, *this, meter.getMinutesPurchased(), car.getMinutesParked());
}
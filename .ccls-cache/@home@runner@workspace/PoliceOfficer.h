#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <string>

using namespace std;

class PoliceOfficer {
private:
  string name;
  string badgeNumber;

public:
  PoliceOfficer(string name, string badgeNumber);
  string getName() const;
  string getBadgeNumber() const;
  ParkingTicket issueTicket(ParkedCar car, ParkingMeter meter) const;
  bool isExpired(ParkedCar car, ParkingMeter meter) const;

};

#endif
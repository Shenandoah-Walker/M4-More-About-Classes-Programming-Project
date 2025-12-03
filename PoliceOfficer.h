#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include <string>

using namespace std;

class ParkingTicket; 

class PoliceOfficer {
private:
    string name;
    string badgeNumber;

public:
    PoliceOfficer(std::string name, std::string badgeNumber);
    string getName() const;
    string getBadgeNumber() const;
    ParkingTicket issueTicket(const ParkedCar& car, const ParkingMeter& meter) const;
    bool isExpired(const ParkedCar& car, const ParkingMeter& meter) const;
};

#endif

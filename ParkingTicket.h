#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "ParkedCar.h"
#include <string>

class PoliceOfficer; 

class ParkingTicket {
private:
    ParkedCar car;
    PoliceOfficer officer;
    double fine;
    int minutesIllegallyParked;
    int minutesPurchased;
    int minutesParked;
    int minutesOver;

public:
    ParkingTicket(const ParkedCar& car, const PoliceOfficer& officer,
                  int minutesPurchased, int minutesParked);
    double getFine() const;
    void printTicket() const;
    int getMinutesIllegallyParked() const;
    int getMinutesPurchased() const;
    int getMinutesParked() const;
    int getMinutesOver() const;
};

#endif

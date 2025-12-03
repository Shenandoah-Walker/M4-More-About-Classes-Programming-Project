#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:

  int minutesPurchased;

public:

ParkingMeter(int minutesPurchased) : minutesPurchased(minutesPurchased) {}


int getMinutesPurchased() const {
    return minutesPurchased;
}
};

#endif
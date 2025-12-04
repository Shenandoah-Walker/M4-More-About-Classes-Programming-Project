#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
  int minutesPurchased;

public:

/*
Constructor: ParkingMeter
Purpose: To initialize the minutes purchased.
Parameters:
 - int minutesPurchased
Returns: None
Preconditions: None
Postconditions: The minutes purchased is initialized.
*/
ParkingMeter(int minutesPurchased) : minutesPurchased(minutesPurchased) {}


/*
Accessor: getMinutesPurchased
Purpose: To return the number of minutes purchased.
Parameters: None
Returns: int
Preconditions: None
Postconditions: The number of minutes purchased is returned.
*/
int getMinutesPurchased() const {
    return minutesPurchased;
}
};

#endif
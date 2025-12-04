#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
  int minutesPurchased;

public:

/*
Constructor: ParkingMeter
Purpose: To initialize the data members of the ParkingMeter class.
Parameters:
 - int minutesPurchased
Returns: None
Preconditions: None
Postconditions: The data members of the ParkingMeter class are initialized.
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
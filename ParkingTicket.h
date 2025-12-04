#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "ParkedCar.h"
#include <string>

class PoliceOfficer; 

class ParkingTicket {
private:
    ParkedCar car;
    const PoliceOfficer& officer;
    double fine;
    int minutesIllegallyParked;
    int minutesPurchased;
    int minutesParked;
    int minutesOver;

public:

    /*
    Constructor: ParkingTicket
    Purpose: To initialize the data members of the ParkingTicket class.
    Parameters:
     - const ParkedCar& car
     - const PoliceOfficer& officer
     - int minutesPurchased
     - int minutesParked
    Returns: None
    Preconditions: None
    Postconditions: The data members of the ParkingTicket class are initialized.
    */
    ParkingTicket(const ParkedCar& car, const PoliceOfficer& officer,
                  int minutesPurchased, int minutesParked);

    /*
    Accessor: getFine
    Purpose: To return the fine.
    Parameters: None
    Returns: double
    Preconditions: None
    Postconditions: The fine is returned.
    */
    double getFine() const;

    /*
    Accessor: printTicket
    Purpose: To print the ticket.
    Parameters: None
    Returns: None
    Preconditions: None
    Postconditions: The ticket is printed.
    */
    void printTicket() const;

    /*
    Accessor: getMinutesIllegallyParked
    Purpose: To return the number of minutes illegally parked.
    Parameters: None
    Returns: int
    Preconditions: None
    Postconditions: The number of minutes illegally parked is returned.
    */
    int getMinutesIllegallyParked() const;

    /*
    Accessor: getMinutesPurchased
    Purpose: To return the number of minutes purchased.
    Parameters: None
    Returns: int
    Preconditions: None
    Postconditions: The number of minutes purchased is returned.
    */
    int getMinutesPurchased() const;

    /*
    Accessor: getMinutesParked
    Purpose: To return the number of minutes parked.
    Parameters: None
    Returns: int
    Preconditions: None
    Postconditions: The number of minutes parked is returned.
    */
    int getMinutesParked() const;

    /*
    Accessor: getMinutesOver
    Purpose: To return the number of minutes over.
    Parameters: None
    Returns: int
    Preconditions: None 
    Postconditions: The number of minutes over is returned.
    */
    int getMinutesOver() const;
};

#endif

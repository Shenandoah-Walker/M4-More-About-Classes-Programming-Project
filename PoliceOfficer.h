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

    /*
    Constructor: PoliceOfficer
    Purpose: To initialize the data members of the PoliceOfficer class.
    Parameters:
     - string name
     - string badgeNumber
    Returns: None
    Preconditions: None
    Postconditions: The data members of the PoliceOfficer class are initialized.
    */
    PoliceOfficer(std::string name, std::string badgeNumber);

    /*
    Accessor: getName
    Purpose: To return the name of the police officer.
    Parameters:
     - None
    Returns: string
    Preconditions: None
    Postconditions: The name of the police officer is returned.
    */
    string getName() const;

    /*
    Accessor: getBadgeNumber
    Purpose: To return the badge number of the police officer.
    Parameters: None
    Returns: string
    Preconditions: None
    Postconditions: The badge number of the police officer is returned.
    */
    string getBadgeNumber() const;

    /*
    Accessor: issueTicket
    Purpose: To issue a parking ticket.
    Parameters:
     - const ParkedCar& car
     - const ParkingMeter& meter
    Returns: ParkingTicket
    Preconditions: None
    Postconditions: A parking ticket is issued.
    */
    ParkingTicket issueTicket(const ParkedCar& car, const ParkingMeter& meter) const;

    /*
    Accessor: isExpired
    Purpose: To check if the parking meter is expired.
    Parameters:
     - const ParkedCar& car
     - const ParkingMeter& meter
    Returns: bool
    Preconditions: None
    Postconditions: The parking meter is checked for expiration.
    */
    bool isExpired(const ParkedCar& car, const ParkingMeter& meter) const;
};

#endif

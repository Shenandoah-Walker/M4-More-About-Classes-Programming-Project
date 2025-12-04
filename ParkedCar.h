#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

using namespace std;

class ParkedCar {
private:
  string make;
  string model;
  string color;
  string licenseNumber;
  int minutesParked;

public:

  /*
  Constructor: ParkedCar
  Purpose: To initialize the data members of the ParkedCar class.
  Parameters:
   - string make
   - string model
   - string color
   - string licenseNumber
   - int minutesParked
   Returns: None
   Preconditions: None
   Postconditions: The data members of the ParkedCar class are initialized.
  */
  ParkedCar(string make, string model, string color, string licenseNumber, int minutesParked);

  /*
  Accessor: getMake
  Purpose: To return the make of the car.
  Parameters: None
  Returns: string
  Preconditions: None
  Postconditions: The make of the car is returned.
  */
  string getMake() const;

  /*
  Accessor: getModel
  Purpose: To return the model of the car.
  Parameters: None
  Returns: string
  Preconditions: None
  Postconditions: The model of the car is returned.
  */
  string getModel() const;

  /*
  Accessor: getColor
  Purpose: To return the color of the car.
  Parameters: None
  Returns: string
  Preconditions: None
  Postconditions: The color of the car is returned.
  */
  string getColor() const;

  /*
  Accessor: getLicenseNumber
  Purpose: To return the license number of the car.
  Parameters: None
  Returns: string
  Preconditions: None
  Postconditions: The license number of the car is returned.
  */
  string getLicenseNumber() const;

  /*
  Accessor: getMinutesParked
  Purpose: To return the minutes parked of the car.
  Parameters: None
  Returns: int
  Preconditions: None
  Postconditions: The minutes parked of the car is returned.
  */
  int getMinutesParked() const;

};
#endif
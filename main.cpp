#include <iostream>
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std;

int main() {
  // Scenario 1: A Car Is Parked Legally
  ParkedCar car1("Toyota", "Camry", "Red", "XYZ123", 30);
  ParkingMeter meter1(40);
  PoliceOfficer officer1("John Doe", "5678");
  
  if (officer1.isExpired(car1, meter1)) {
    ParkingTicket ticket1 = officer1.issueTicket(car1, meter1);
    ticket1.printTicket(); 
  }

  else {
    cout << "Car is parked legally." << endl;
    cout << endl;
  }

  // Scenario 2: A Car Is Parked Illegally (Less Than an Hour Over Time)
  ParkedCar car2("Honda", "Accord", "Blue", "ABC987", 70);
  ParkingMeter meter2(60);
  PoliceOfficer officer2("Jane Smith", "1234");
  if (officer2.isExpired(car2, meter2)) {
    ParkingTicket ticket2 = officer2.issueTicket(car2, meter2);
    ticket2.printTicket();
    }
    else {
      cout << "Car is parked legally." << endl;
      }
    

  // Scenario 3: A Car Is Parked Illegally (Multiple Hours Over Time)
  ParkedCar car3("Ford", "Mustang", "Black", "LMN456", 190);
  ParkingMeter meter3(60);
  PoliceOfficer officer3("James Brown", "4321");
  if (officer3.isExpired(car3, meter3)) {
    ParkingTicket ticket3 = officer3.issueTicket(car3, meter3);
    ticket3.printTicket();
    }
    else {
      cout << "Car is parked legally." << endl;
    }


   // Scenario 4: Multiple Cars in a Parking Lot
  ParkedCar car4("Chevrolet", "Impala", "White", "DEF654", 120);
  ParkingMeter meter4(60);
  PoliceOfficer officer4("Bob Smith", "2468");
  if (officer4.isExpired(car4, meter4)) {
    ParkingTicket ticket4 = officer4.issueTicket(car4, meter4);
    ticket4.printTicket();
    }
    else {
      cout << "Car is parked legally." << endl;
      cout << endl;
      }

  ParkedCar car5("Nissan", "Altima", "Gray", "GHI321", 90);
  ParkingMeter meter5(60);
  if (officer4.isExpired(car5, meter5)) {
    ParkingTicket ticket5 = officer4.issueTicket(car5, meter5);
    ticket5.printTicket();
    }
    else {
      cout << "Car is parked legally." << endl;
      cout << endl;
      }

  ParkedCar car6("Ford", "Focus", "Blue", "JIK123", 10);
  ParkingMeter meter6(60);
  if (officer4.isExpired(car6, meter6)) {
    ParkingTicket ticket6 = officer4.issueTicket(car6, meter6);
    ticket6.printTicket();
    }
    else {
      cout << "Car is parked legally." << endl;
      cout << endl;
      }

   ParkedCar car7("Toyota", "Corolla", "Red", "MNO456", 15);
  ParkingMeter meter7(30);
  if (officer4.isExpired(car7, meter7)) {
    ParkingTicket ticket7 = officer4.issueTicket(car7, meter7);
    ticket7.printTicket();
  }
  else{
    cout << "Car is parked legally." << endl;
    cout << endl;
  } 

  return 0;

    }
  
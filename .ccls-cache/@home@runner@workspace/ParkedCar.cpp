#include "ParkedCar.h"
#include <string>
#include <iostream>

using namespace std;

ParkedCar::ParkedCar(string make, string model, string color, string licenseNumber, int minutesParked) {
  this->make = make;
  this->model = model;
  this->color = color;
  this->licenseNumber = licenseNumber;
   this->minutesParked = minutesParked;
   }

string ParkedCar::getMake() const {

  return make;
}

string ParkedCar::getModel() const {
  return model;
}

string ParkedCar::getColor() const {
  return color;
}

string ParkedCar::getLicenseNumber() const {
  return licenseNumber;
}

int ParkedCar::getMinutesParked() const {
  return minutesParked;
}
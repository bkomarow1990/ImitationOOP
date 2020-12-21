#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;
class Car : public Vehicle
{
private:
	double power;
protected:
public:
	void setPower(const double& power);
	const double getPower()const;
	void print()const;
	Car(const string& licensePlate = "AA0000AA", const size_t & speed = 0,const double & power=0);
	~Car();
};

inline const double Car::getPower()const {
	return power;
}

inline void Car::print() const
{
	//Vehicle::print();
	cout << "Car: "<<getLicense()<<" Power: " << power << " Speed: "<<speed<<endl;
}


#include "Car.h"
void Car::setPower(const double& power)
{
	if (power<0)
	{
		return;
	}
	this->power = power;
}
Car::Car(const string& licensePlate, const size_t& speed, const double& power)
	:Vehicle(licensePlate,speed)
{
	setPower(power);
	cout << "Ctor car" << licensePlate << "works" << endl;
}

Car::~Car()
{
	cout << "Dtor car: " << getLicense()<<endl;
}

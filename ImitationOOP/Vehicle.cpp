#include "Vehicle.h"

void Vehicle::setSpeed(const size_t& speed)
{
	if (speed>400)
	{
		return;
	}
	this->speed = speed;
}

void Vehicle::setLicense(const string& licensePlate)
{
	if (licensePlate.size()!=8)
	{
		return;
	}
	this->licensePlate = licensePlate;
}

void Vehicle::print() const
{
	cout << "Vehicle : " << licensePlate << endl;
	cout << "Current Speed: "<<speed << endl;
}

const string Vehicle::getLicense() const
{
	return licensePlate;
}

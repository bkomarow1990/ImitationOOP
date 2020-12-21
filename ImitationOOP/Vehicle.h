#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
public:
	Vehicle(const string& licensePlate = "AA0000AA", const size_t& speed = 0);
	~Vehicle();
	void setSpeed(const size_t& speed);
	void setLicense(const string& licensePlate);
	void print()const;
	const string getLicense()const;
	const size_t getSpeed()const;
	
private:
	string licensePlate;
protected:
	size_t speed;

};
inline const size_t Vehicle::getSpeed()const {
	return speed;
}

inline Vehicle::Vehicle(const string& licensePlate, const size_t& speed)
{
	setLicense(licensePlate);
	setSpeed(speed);
}

inline Vehicle::~Vehicle()
{
	cout << "Dctor for " << licensePlate << endl;
}

#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;
class Bus : public Vehicle
{
public:
	Bus(const string& licensePlate = "AA0000AA", const size_t& speed = 0, const size_t& seats = 0);
	void setSeats(const size_t & seats);
	void print()const;
	~Bus();
private:
	size_t seats;
protected:
};


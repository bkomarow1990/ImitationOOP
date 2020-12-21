#include "Bus.h"

Bus::Bus(const string& licensePlate, const size_t& speed, const size_t& seats)
	:Vehicle(licensePlate, speed)
{
		setSeats(seats);
		cout << "Ctor Seats" << licensePlate << "works" << endl;
}

void Bus::setSeats(const size_t& seats)
{
	if (seats<=100)
	{
		this->seats = seats;
	}
}

void Bus::print() const
{
	cout << "Car: " << getLicense() << " Seats: " << seats << " Speed: " << speed << endl;
}

Bus::~Bus()
{
	cout << "Dctor Bus" << endl;
}

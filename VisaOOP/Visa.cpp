#include "Visa.h"

Visa::Visa(const string& country_name, const Date& aviableDate)
{
	setCountryName(country_name);
	this->aviableDate = aviableDate;
}

void Visa::setCountryName(const string& name)
{
	if (name.empty())
	{
		return;
	}
	this->country_name = name;
}

void Visa::print() const
{
	cout << "Country name: " <<country_name<< endl;
	cout << "Aviable date: ";
	aviableDate.print();
}

#include "Passport.h"
#include <iostream>
using namespace std;
Passport::Passport(const string& PIB, const string& id, const size_t& number, const Date& birthDay, const Date& putDay)
{
	setPIB(PIB);
	setId(id);
	setNumber(number);
	this->birthDay = birthDay;
	this->putDay = putDay;
}

void Passport::setPIB(const string& PIB)
{
	if (PIB.length() < 8)
	{
		return;
	}
	this->PIB = PIB;
}

void Passport::setId(const string& id)
{
	if (id.length()!=0 )
	{
		this->id = id;
	}
}

const string Passport::getPIB() const
{
	return PIB;
}

const string Passport::getId() const
{
	return id;
}

const size_t Passport::getNumber() const
{
	return number;
}

void Passport::setNumber(const size_t& number)
{
	if (number!=0)
	{
		this->number = number;
	}
}

void Passport::print() const
{
	cout << "PIB: "<<PIB << endl;
	cout << "ID: "<<id << endl;
	cout << "NUMBER: "<<number << endl;
	cout << "BDAY : ";
	birthDay.print();
	cout << "PUTDAY : ";
	putDay.print();
}

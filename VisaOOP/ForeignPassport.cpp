#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string& PIB, const string& id, const size_t& number, const Date& birthDay, const Date& putDay)
	:Passport(PIB,id,number,birthDay,putDay)
{
}

ForeignPassport::ForeignPassport(const Passport& passport, const string& id, const size_t& number)
	:Passport(passport)
{
	this->setId(id);
	this->setNumber(number);
}

void ForeignPassport::addVisa(const Visa& visa)
{
	visas.push_back(visa);
}

void ForeignPassport::print() const
{
	cout << "Foreign Passport: " << endl << "PIB: " << getPIB() << endl;
	cout << "ID: " << getId() << endl;
	cout << "Number: " << getNumber() << endl;
	cout << "B-DAY: ";
	birthDay.print();
	cout << "PUT-DAY: ";
	putDay.print();
	cout << "Visas: " << endl;
	for (size_t i = 0; i < visas.size(); i++)
	{
		visas[i].print();
	}
	cout << "=========================================" << endl;
}

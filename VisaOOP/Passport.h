#pragma once
#include <iostream>
#include "Date.h"
using namespace std;
class Passport
{
public:
	Passport(const string& PIB = "Poroshenko Petro Oleksiyovich", const string& id = "0", const size_t& number = 0, const Date& birthDay = { 1, 12, 2002 }, const Date& putDay = { 1, 10, 2020 });
	void setPIB(const string& PIB);
	void setId(const string& id);
	const string getPIB()const;
	const string getId()const;
	const size_t getNumber()const;
	void setNumber(const size_t& number);
	void print()const;
private:
	string PIB;
	string id;
	size_t number;
protected:
	Date birthDay;
	Date putDay;
};


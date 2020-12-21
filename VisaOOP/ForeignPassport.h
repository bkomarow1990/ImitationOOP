#pragma once
#include <iostream>
#include <vector>
#include "Passport.h"
#include "Visa.h"
using namespace std;
class ForeignPassport : public Passport
{
public:
	ForeignPassport(const string& PIB = "Poroshenko Petro Oleksiyovich", const string& id = "0", const size_t& number = 0, const Date& birthDay = { 1, 12, 2002 }, const Date& putDay = { 1, 10, 2020 });
	ForeignPassport(const Passport& passport, const string& id, const size_t& number);
	void addVisa(const Visa& visa);
	void print()const;
private:
	vector<Visa>visas;
};


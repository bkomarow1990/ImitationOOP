#pragma once
#include <iostream>
#include "Date.h"
using namespace std;
class Visa
{
private:
	string country_name;
	Date aviableDate;
public:
	Visa(const string& country_name = "NoCountry", const Date& aviableDate = { 1,12,2022 });
	void setCountryName(const string& name);
	void print()const;
};


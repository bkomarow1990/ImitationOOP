#include <iostream>
#include "Car.h"
#include "Bus.h"
//#include "Vehicle.h"
using namespace std;
int main() {
	Vehicle v1("AA2093AH", 60);
	v1.print();
	Car car("BK2281AA",90,2);
	car.print();
	cout << "Bus: " << endl;
	Bus b1("BK1283BK",90,42);
	b1.print();
	return 0;
}
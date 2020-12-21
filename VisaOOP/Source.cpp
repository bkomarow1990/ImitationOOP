#include <iostream>
#include "ForeignPassport.h"
//Визначити клас Passport(паспорт), який буде містити паспортну інформацію про громадянина України(ПІБ, серія та  номер, дата народження, дата видачі).
//За допомогою механізму успадкування реалізувати клас ForeignPassport(закордонний паспорт) як похідний від Passport.
//Закордонний паспорт містить окрім паспортних даних, також дані про всі видані візи.
//Реалізувати  конструктори для Закордонного Паспорта
//ForeignPassport(seria, name, birth, datePut)
//ForeignPassport(UkrPassport  paspport, seria, datePut)
//Видані візи можна зберігати у вигляді масиву(динамічного масиву) чи вектору(vector<Visa> visas).
//Передбачити можливість додавання нових віз до паспорту.
//Visa(Віза, окремий клас) містить назву країни та дату дії візи.
//Протестувати роботу класів.
using namespace std;
int main() {
	Passport p1("Bebko Ahmed Valeriyovich", "21234124", 4,Date(2,12,2000),Date(2,10,2010));
	p1.print();
	cout << "Foreign" << endl;
	ForeignPassport fp1(p1,"42342",2);
	fp1.print();
	cout << "After adding Visa" << endl;
	fp1.addVisa(Visa("Philliphines",Date(24,12,2025)));
	fp1.addVisa(Visa("Greenland",Date(24,10,2025)));
	fp1.print();
	return 0;
}
#include <iostream>
#include "ForeignPassport.h"
//��������� ���� Passport(�������), ���� ���� ������ ��������� ���������� ��� ����������� ������(ϲ�, ���� ��  �����, ���� ����������, ���� ������).
//�� ��������� �������� ������������ ���������� ���� ForeignPassport(����������� �������) �� �������� �� Passport.
//����������� ������� ������ ���� ���������� �����, ����� ��� ��� �� ����� ���.
//����������  ������������ ��� ������������ ��������
//ForeignPassport(seria, name, birth, datePut)
//ForeignPassport(UkrPassport  paspport, seria, datePut)
//����� ��� ����� �������� � ������ ������(���������� ������) �� �������(vector<Visa> visas).
//����������� ��������� ��������� ����� �� �� ��������.
//Visa(³��, ������� ����) ������ ����� ����� �� ���� 䳿 ���.
//������������ ������ �����.
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
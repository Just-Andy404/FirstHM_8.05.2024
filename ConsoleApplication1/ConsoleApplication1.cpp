/*
������� ����������� ������� ����� Employer (��������) � ����� ����������� �������� Print (). 
�������� ��� ����������� ������: President, Manager, Worker. �������������� ������� Print()
��� ������ ����������, ������� ������������� ������� ���� ���������.
*/
#include <iostream>

#include "Employer.h"
#include "Manager.h"
#include "President.h"
#include "Worker.h"
using namespace std;

int main()
{
	cout << "Task 1" << endl;
	Manager Employer1("Bob");
	President Employer2("Alex");
	Worker Employer3("Jhon");
	Employer* emp = &Employer1;
	emp->print();
	emp = &Employer2;
	emp->print();
	emp = &Employer3;
	emp->print();

	return 0;
}

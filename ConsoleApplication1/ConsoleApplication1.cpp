/*
Создать абстрактный базовый класс Employer (служащий) с чисто виртуальной функцией Print (). 
Создайте три производных класса: President, Manager, Worker. Переопределите функцию Print()
для вывода информации, которая соответствует каждому типу служащего.
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

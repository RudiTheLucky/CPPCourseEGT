#include <iostream>
#include <string>
#include "Department.h"

using namespace std;

Department::Department(string n) : departmentName(n), numEmployees(0)
{
}

void Department::addEmployee(Employee* e)
{
	this->employees[numEmployees] = e;
	this->numEmployees += 1;
}

void Department::displayEmployees()
{
	for (int i = 0; i < this->numEmployees; i++)
	{
		this->employees[i]->display();
	}
}

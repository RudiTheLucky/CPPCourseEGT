#include <iostream>
#include <string>

#include "Member.h"

using namespace std;

Member::Member(string n, int a, string id) : name(n), age(a), memberID(id)
{
}

void Member::display()
{
	cout << "Member with ID: " << this->memberID
		<< " named " << this->name
		<< " and age of " << this->age << endl;
}

void Member::borrowBook(Book* b)
{
	cout << "Member with ID " << this->memberID << " has borrowed book with ";
	b->display();
	
}

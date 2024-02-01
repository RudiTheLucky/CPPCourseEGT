#include <string>
#include <Address>
using namespace std;

Address::Address(string personName, string phone, string city, string street) {
	this->personName = personName;
	this->phone = phone;
	this->city = city;
	this->street = street;


}

void Address : print() {
	cout << this->personName << " " << this->phone << " " << this->city << " " << this->street << " " << endl;
}
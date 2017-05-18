// File: address.h

#include <string>

using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H


class Address 
{
	private:
		string street;
		string city;
		string state;
		string zip;
	public:
		Address() 
		{
			street = "unkown";
			city = "";
			state = "";
			zip = "00000";
		}
		Address(string street, string city, string state, string zip) 
		{
			this->street = street;
			this->city = city;
			this->state = state;
			this->zip = zip;
		}
		void setStreet(string street) { this->street = street; }
		string getStreet() { return street; }
		void setCity(string city) { this->city = city; }
		string getCity() { return city; }
		void setState(string state) { this->state = state; }
		string getState() { return state; }
		void setZip(string zip) { this->zip = zip; }
		string getZip() { return zip; }
		void display();
};

#endif

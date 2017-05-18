// File: customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

class Customer 
{
	private:
		string name;
		Address address;
	public:
		Customer() 
		{
			name = "unspecified";
		}
		Customer(string name, Address &address) 
		{
			this->name = name;
			this->address.setStreet(address.getStreet());
			this->address.setCity(address.getCity());
			this->address.setState(address.getState());
			this->address.setZip(address.getZip());
		}
		string getName() { return name; }
		void setName(string name) { this->name = name; }
		Address getAddress() 
		{
			return address;
		}
		void setAddress(Address &address) 
		{
			this->address.setStreet(address.getStreet());
			this->address.setCity(address.getCity());
			this->address.setState(address.getState());
			this->address.setZip(address.getZip());
		}
		void display();


};

#endif

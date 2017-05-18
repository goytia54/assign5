// File: customer.cpp

#include <iomanip>
#include <string>
#include <iostream>

#include "customer.h"

using namespace std;

void Customer::display() 
{
	cout << getName() << endl;
	address.display();
	return;
}

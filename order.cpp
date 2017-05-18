// File: order.cpp

#include "order.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Order::displayShippingLabel()
{
	customer.display();
	return;
}

void Order::displayInformation()
{
	cout << customer.getName() << endl;
	cout << product.getName() << endl;
	cout << getTotalPrice() << endl;
	return;
}

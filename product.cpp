/***************************************************************
 * File: product.cpp
 * Author: Michael Goytia
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

// method to prompt user for item name, description, wieght, price.
void Product::prompt() 
{
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter description: ";
	getline(cin, description);
	cout << "Enter weight: ";
	cin >> weight;
	cout << "Enter price: ";
	cin >> basePrice;
	//catch if the price < 0 or not a float.
	while (cin.fail() || basePrice < 0)
	{
		cin.clear(); // clear error
        cin.ignore(256,'\n'); //ignore rest of buffer
        cout << "Enter price: ";
        cin >> basePrice;
    }
	cin.ignore();
	return;
}

//method to calculate sales tax 
float Product::getSalesTax()
{
	return basePrice * 0.06;
}

//method to calculate shipping cost
float Product::getShippingCost()
{
	if (weight < 5.00)
		return 2.00;
	else
		return 2.00 + ((weight - 5.00)*0.10);
}

//method adds shipping cost, base price and sales tax to get total price
float Product::getTotalPrice()
{
	return getSalesTax() + getShippingCost() + basePrice;
}

//display advertise view
void Product::displayAdvertising()
{
	
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);	
    cout << name << " - $" <<  setprecision(2) << basePrice << endl;
	cout << "(" << description << ")" << endl;
	return;
}

//display inventory view
void Product::displayInventory()
{
	
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << "$" << setprecision(2) << basePrice << " - " << name << " - " 
             << setprecision(1)  << weight << " lbs"  << endl;
	return;
}

//display reciept view
void Product::displayReceipt()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << name << endl;
	cout << "  Price: "; 
	cout << setw(9) << "$" << setw(8) << basePrice << endl;
	cout << "  Sales tax: "; 
	cout << setw(5) << "$" << setw(8) << getSalesTax() << endl;
	cout << "  Shipping cost: "; 
	cout << setw(1) << "$" << setw(8) << getShippingCost() << endl;
	cout << "  Total: "; 
	cout << setw(9) << "$" << setw(8) << getTotalPrice() << endl;
	return;
}

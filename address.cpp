// File: address.cpp
#include <iomanip>
#include <string>
#include <iostream>

#include "address.h"

using namespace std;

void Address::display()
{
	cout << street << endl << city << ", " 
		 << state << " " << zip << endl;
}
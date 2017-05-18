/***************************************************************
 * File: product.h
 * Author: Michael Goytia
 * Purpose: Contains the definition of the Product class
 ***************************************************************/

#include <string>

using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
	private:
		string name, description;
		float basePrice, weight;
	public:
		Product() 
		{
			name = "none";
			description = "";
			basePrice = 0.0f;
			weight = 0.0f;
		}
		Product(string name, string description, float basePrice, float weight) 
		{
			this->name = name;
			this->description = description;
			this->basePrice = basePrice;
			this->weight = weight;
		}
		void prompt();
		string getName() { return name; }
		void setName(string name) { this->name = name; }
		string getDescription() { return description; }
		void setDescription(string description) 
		{ 
			this->description = description;
		}
		float getBasePrice() { return basePrice; }
		void setBasePrice(float basePrice) { this->basePrice = basePrice; }
		float getWeight() { return weight; }
		void setWeight(float weight) { this->weight = weight; }
		float getSalesTax();
		float getShippingCost();
		float getTotalPrice();
		void displayAdvertising();
		void displayInventory();
		void displayReceipt();
};



#endif

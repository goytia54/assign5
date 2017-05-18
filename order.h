// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"

class Order
{
	private:
		Product product;
		Customer customer;
		int quantity;
	public:
		Order() { quantity = 0; }
		Order(Product &product, int quantity, Customer &customer)
		{
			this->product.setName(product.getName());
			this->product.setDescription(product.getDescription());
			this->product.setWeight(product.getWeight());
			this->product.setBasePrice(product.getBasePrice());
			this->quantity = quantity;
			this->customer.setName(customer.getName());
			this->customer.setAddress(customer.getAddress());
		}
		Product getProduct() { return product; }
		void setProduct(Product &product) 
		{
			this->product.setName(product.getName());
			this->product.setDescription(product.getDescription());
			this->product.setWeight(product.getWeight());
			this->product.setBasePrice(product.getBasePrice());
		}
		Customer getCustomer() { return customer; }
		void setCustomer(Customer &customer) 
		{
			this->customer.setName(customer.getName());
			this->customer.setAddress(customer.getAddress());
		}
		int getQuantity() { return quantity; }
		void setQuantity(int quantity) { this->quantity = quantity; }
		string getShippingZip() { return customer.getAddress().getZip(); }
		float getTotalPrice() { return product.getTotalPrice()* quantity; }
		void displayShippingLabel();
		void displayInformation();

};
#endif

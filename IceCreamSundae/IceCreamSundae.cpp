#include "IceCreamSundae.h"
#include <iostream>
using namespace std;

IceCreamSundae::IceCreamSundae()
{
	cout << "Default Constructor is called.." << endl;
}

IceCreamSundae::IceCreamSundae(string flavour) {
	cout << "Parameter Constructor is called.." << endl;
	this->falvour = flavour;
}

IceCreamSundae::~IceCreamSundae()
{
	cout << "IceCreamSundae Destructor called.." << endl;
}

void IceCreamSundae::addToppings(string topping) {
	this->toppings.push_back(topping);
}

string IceCreamSundae::getFalvour() const {
	return this->falvour;
}

vector<string> IceCreamSundae::getToppings() const {
	return this->toppings;
}

void IceCreamSundae::printIceCreamSundae() const {
	cout << "Ice Cream Sundae Details are: \n" <<
		"Flavour: " << this->falvour << endl <<
		"Toppings: ";
	for (auto topping : toppings) {
		cout << topping << ", ";
	}
	cout << endl;
}
#ifndef ICECREAMSUNDAE_H
#define ICECREAMSUNDAE_H
#include <string>
#include <vector>

using namespace std;

class IceCreamSundae {
public:
	IceCreamSundae();
	IceCreamSundae(string flavour);

	~IceCreamSundae();

	void addToppings(string topping);

	string getFalvour() const;
	vector<string> getToppings() const;

	void printIceCreamSundae() const;
private:
	string falvour;
	vector<string> toppings;

};

#endif
#include <iostream>
#include "IceCreamSundae.h"

using namespace std;

int main()
{
	IceCreamSundae vanilaIceCream("Vanila");
	IceCreamSundae butterScotchIceCream("butterScotch");

	vanilaIceCream.addToppings("fruits");
	vanilaIceCream.addToppings("nuts");

	butterScotchIceCream.addToppings("candies");
	butterScotchIceCream.addToppings("cookies");
	butterScotchIceCream.addToppings("whipped cream");

	vanilaIceCream.printIceCreamSundae();
	butterScotchIceCream.printIceCreamSundae();
}
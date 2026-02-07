#include <iostream>
//#include <string>
#include "LibraryCard.h"

using namespace std;

int main()
{
	LibraryCard card1;
	LibraryCard card2("suresh");
	LibraryCard card3("Nivas");

	card1.setCardHolderName("Nagendra");
	card1.checkoutBook();
	card1.checkoutBook();
	card2.checkoutBook();
	card2.checkoutBook();
	card2.checkoutBook();
	card3.checkoutBook();
	card3.checkoutBook();
	card1.returnBook();


	card1.printLibraryCardDetails();
	card2.printLibraryCardDetails();
	card3.printLibraryCardDetails();

}
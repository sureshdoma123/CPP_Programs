#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
	Book b1;
	Book b2("suresh", "C++ Programming", "Eductation/Study", 100);

	b1.setAuthor("Nivas");
	b1.setTitle("Share Marketing Strategies");
	b1.setGenre("Stocks/Eductation");
	b1.setNumOfPages(150);

	cout << "Printing Book fields using getter methods: " << endl;
	cout << "Book 1 details are: " << b1.getTitle() << " " << b1.getAuthor() << " " << b1.getGenre() << " " << b1.getNumOfPages() << endl;
	cout << "Book 2 details are: " << b2.getTitle() << " " << b2.getAuthor() << " " << b2.getGenre() << " " << b2.getNumOfPages() << endl;

	b1.printBookDetails();
	b2.printBookDetails();
}
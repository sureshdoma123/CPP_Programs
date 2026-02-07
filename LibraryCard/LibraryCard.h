#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H
#include <string>
using namespace std;

class LibraryCard {
	public:
		LibraryCard();
		LibraryCard(string cardHolderName);

		void checkoutBook();
		void returnBook();
		void setCardHolderName(string cardHolderName);

		string getCardHolderName() const;
		int getBooksCheckedOut() const;

		void printLibraryCardDetails() const;

	private:
		string cardHolderName;
		int booksCheckedOut;
};

#endif
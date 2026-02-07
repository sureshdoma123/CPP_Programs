#include "LibraryCard.h"
#include <iostream>

LibraryCard::LibraryCard()
{
	std::cout << "Default constructor called" << std::endl;
	this->booksCheckedOut = 0;
	this->cardHolderName = "";
}

LibraryCard::LibraryCard(string cardHolderName) {
	std::cout << "Parameter Constructor called" << std::endl;
	this->cardHolderName = cardHolderName;
	this->booksCheckedOut = 0;
}

void LibraryCard::setCardHolderName(string cardHolderName) {
	this->cardHolderName = cardHolderName;
}

void LibraryCard::checkoutBook() {
	this->booksCheckedOut++;
}

void LibraryCard::returnBook() {
	this->booksCheckedOut = this->booksCheckedOut > 0 ? this->booksCheckedOut - 1 : this->booksCheckedOut;
}

string LibraryCard::getCardHolderName() const {
	return this->cardHolderName;
}

int LibraryCard::getBooksCheckedOut() const {
	return this->booksCheckedOut;
}

void LibraryCard::printLibraryCardDetails() const {
	std::cout << "----Library Card Details ---- \n" << 
				 "Card Holder Name: " << this->cardHolderName <<
				 "\nNo of Books checked Out: " << this->booksCheckedOut << std::endl;
}
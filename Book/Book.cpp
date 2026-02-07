#include <iostream>
#include "Book.h"

using namespace std;

Book::Book()
{
	cout << "Default Constructor called" << endl;
}

Book::Book(string author, string title, string genre, int numPages) {
	cout << "Parameter Constructor called" << endl;
	this->author = author;
	this->title = title;
	this->genre = genre;
	this->numOfPages = numPages;
}

Book::~Book()
{
	cout << "Book class Destructor called" << endl;
}

// Class Setter Methods
void Book::setAuthor(string author) {
	this->author = author;
}

void Book::setTitle(string title) {
	this->title = title;
}

void Book::setGenre(string genre) {
	this->genre = genre;
}

void Book::setNumOfPages(int numPages) {
	this->numOfPages = numPages;
}

// Class Getter Methods
string Book::getAuthor() const {
	return this->author;
}

string Book::getTitle() const {
	return this->title;
}

string Book::getGenre() const {
	return this->genre;
}

int Book::getNumOfPages() const {
	return this->numOfPages;
}

void Book::printBookDetails() const {
	cout << "Book Name: " << this->title << 
			" Book Author: " << this->author << 
			" Book Genre: " << this->genre << 
			" Book Number of Pages: " << this->numOfPages << endl;
}
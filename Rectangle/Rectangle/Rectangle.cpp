#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
	cout << "Empty Constructor called" << endl;
}

Rectangle::Rectangle(double length, double width) {
	cout << "Parameter Constructor called and initialized" << endl;
	this->length_ = length;
	this->width_ = width;
}

Rectangle::~Rectangle() {
	cout << "Rectangle Class Destructor Called" << endl;
}

void Rectangle::setLength(double value){
	this->length_ = value;
}

void Rectangle::setWidth(double value){
	this->width_ = value;
}

double Rectangle::getLength() const {
	return this->length_;
}

double Rectangle::getWidth() const {
	return this->width_;
}

double Rectangle::area() const{
	return this->length_ * this->width_;
}

double Rectangle::permiter() const {
	return 2 * (this->length_ + this->width_);
}
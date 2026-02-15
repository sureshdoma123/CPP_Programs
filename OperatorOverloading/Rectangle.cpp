#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : length_(0), width_(0){
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

bool Rectangle::operator==(const Rectangle &r2) const{
	return (length_ == r2.length_ && width_ == r2.width_);
}
bool Rectangle::operator!=(const Rectangle &r2) const{
	return (*this == r2);
}
Rectangle Rectangle::operator+(const Rectangle &r2) const{
	return Rectangle(length_ + r2.length_, width_ + r2.width_);
}
bool Rectangle::operator<(const Rectangle &r2) const{
	return this->area() < r2.area();
}
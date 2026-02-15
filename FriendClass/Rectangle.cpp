#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int height, int width) : height(height), width(width) {};

void Rectangle::setWidth(int width){
    this->width = width;
}
void Rectangle::setHeight(int height){
    this->height = height;
}
int Rectangle::getHeight() const{
    return this->height;
}
int Rectangle::getWidth() const{
    return this->width;
}
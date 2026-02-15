#ifndef RECTANGLE__H
#define RECTANGLE__H
#include <iostream>

class Rectangle{
    friend class RectangleHelper;

    public:
        Rectangle(int height, int width);
        void setWidth(int width);
        void setHeight(int height);
        int getHeight() const;
        int getWidth() const;

    private : 
        int height, width;
};

#endif  //!RECTANGLE__H
#include "Rectangle.h"
#ifndef RECTANGLE_HELPER__H
#define RECTANGLE_HELPER__H
using namespace std;

class RectangleHelper{
    public:
        void modifyRectangle(Rectangle& rect){
            rect.height = 100;
            rect.width = 100;
        }
        void printData(Rectangle& rect)const {
            cout << "Rectangle Details are:\n\tHeight is:" << rect.getHeight()
                << "\n\tWidth: " << rect.getWidth() << endl;
        }
};

#endif  //!RECTANGLEHELPER__H
#include "Rectangle.h"
#include "RectangleHelper.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle rect1(10,10);
    RectangleHelper helper;

    helper.printData(rect1);

    helper.modifyRectangle(rect1);

    helper.printData(rect1);

    return 0;
}
#include <iostream>

#include "Buffer.h"

using namespace std;

int main() {
    Buffer a("Hello");

    Buffer b = a;

    Buffer c = move(a);

    Buffer d("Temporary");
    d = b;

    Buffer e("Temp");
    e = move(c);

    b.printDetails();
    d.printDetails();
    e.printDetails();
}
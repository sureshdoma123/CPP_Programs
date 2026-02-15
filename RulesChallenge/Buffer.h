#ifndef BUFFER_H
#define BUFFER_H
#include <cstring>
#include <iostream>
using namespace std;

class Buffer {
   public:
    Buffer(const char* character) {
        cout << "Buffer Constructor callled." << endl;
        length = strlen(character);
        char_ = new char[length + 1];
        strcpy_s(char_, strlen(character) + 1, character);
    }
    ~Buffer() {
        cout << "Buffer Destructor called." << endl;
        delete[] char_;
    }

    Buffer(const Buffer& other) {
        cout << "Copy constructor called." << endl;
        length = other.length;
        char_ = new char[length + 1];
        strcpy_s(char_, strlen(other.char_) + 1, other.char_);
    }

    Buffer& operator=(const Buffer& other) {
        cout << "Copy assignment called." << endl;
        if (this != &other) {
            delete[] char_;
            length = strlen(other.char_);
            char_ = new char[length + 1];
            strcpy_s(char_, strlen(other.char_) + 1, other.char_);
        }
        return *this;
    }

    Buffer(Buffer&& other) noexcept {
        cout << "Move cosntructor called." << endl;
        char_ = other.char_;
        length = other.length;
        other.char_ = nullptr;
        other.length = 0;
    }

    Buffer& operator=(Buffer&& other) noexcept {
        cout << "Move assignemnt called" << endl;
        if (this != &other) {
            delete[] char_;
            length = other.length;
            char_ = other.char_;
            other.char_ = nullptr;
            other.length = 0;
        }
        return *this;
    }

    void printDetails() const { cout << "Buffer Contets: " << (char_ ? char_ : "null") << endl; }

   private:
    char* char_;
    size_t length;
};

#endif
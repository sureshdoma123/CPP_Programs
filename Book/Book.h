#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book {
    public:
        Book();
        Book(string author, string title, string genre, int numPages);
        ~Book();

        void setAuthor(string autho);
        void setTitle(string title);
        void setGenre(string genre);
        void setNumOfPages(int numPages);

        string getAuthor() const;
        string getTitle() const;
        string getGenre() const;
        int getNumOfPages() const;

        void printBookDetails() const;

    private:
        string author, title, genre;
        int numOfPages;
};

#endif
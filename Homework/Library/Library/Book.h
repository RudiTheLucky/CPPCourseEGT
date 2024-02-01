#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Author.h"

enum Genre {
    CLASSICS,
    ANIME,
    FANTASY,
    BIOGRAPHICAL,
    ROMANTIC
};

class Book {
public:
    std::string name;
    Author author;
    Genre genre;
    int yearOfPublishment;

    Book(const std::string& bookName, const Author& bookAuthor, Genre bookGenre, int publishYear);

    void displayBookInfo() const;
};

#endif // BOOK_H

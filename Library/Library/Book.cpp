#include "Book.h"
#include <iostream>

Book::Book(const std::string& bookName, const Author& bookAuthor, Genre bookGenre, int publishYear)
    : name(bookName), author(bookAuthor), genre(bookGenre), yearOfPublishment(publishYear) {}

void Book::displayBookInfo() const {
    std::cout << "Book Name: " << name << std::endl;
    std::cout << "Author: " << author.firstName << " " << author.surname << " (" << author.nationality << ")" << std::endl;
    std::cout << "Genre: ";
    switch (genre) {
    case CLASSICS: std::cout << "Classics"; break;
    case ANIME: std::cout << "Anime"; break;
    case FANTASY: std::cout << "Fantasy"; break;
    case BIOGRAPHICAL: std::cout << "Biographical"; break;
    case ROMANTIC: std::cout << "Romantic"; break;
    default: std::cout << "Unknown Genre";
    }
    std::cout << std::endl;
    std::cout << "Year of Publishment: " << yearOfPublishment << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}


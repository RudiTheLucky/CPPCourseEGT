// Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Author.h"
#include "Book.h"

int main() {
    // Your code here...

    return 0;


#include <iostream>
#include <vector>
#include <algorithm>  // For std::transform
#include <iomanip>    // For std::setw

    // ... (previous code)

    class Book {
    public:
        // ... (previous code)

        // Function to check if a book's name contains the search string
        bool containsName(const std::string& searchStr) const;

        // Function to check if a book's author matches the search author
        bool hasAuthor(const Author& searchAuthor) const;

        // Static function to search books by name
        static std::vector<Book> searchBooksByName(const std::vector<Book>& books, const std::string& searchStr);

        // Static function to search books by author
        static std::vector<Book> searchBooksByAuthor(const std::vector<Book>& books, const Author& searchAuthor);
    };

    // ... (previous code)

    bool Book::containsName(const std::string & searchStr) const {
        // Convert both the book name and the search string to lowercase for case-insensitive search
        std::string bookNameLower = name;
        std::transform(bookNameLower.begin(), bookNameLower.end(), bookNameLower.begin(), ::tolower);
        std::string searchStrLower = searchStr;
        std::transform(searchStrLower.begin(), searchStrLower.end(), searchStrLower.begin(), ::tolower);

        // Check if the book's name contains the search string
        return bookNameLower.find(searchStrLower) != std::string::npos;
    }

    bool Book::hasAuthor(const Author & searchAuthor) const {
        // Check if the book's author matches the search author
        return author.firstName == searchAuthor.firstName &&
            author.surname == searchAuthor.surname &&
            author.nationality == searchAuthor.nationality;
    }

    std::vector<Book> Book::searchBooksByName(const std::vector<Book>&books, const std::string & searchStr) {
        std::vector<Book> results;
        for (const Book& book : books) {
            if (book.containsName(searchStr)) {
                results.push_back(book);
            }
        }
        return results;
    }

    std::vector<Book> Book::searchBooksByAuthor(const std::vector<Book>&books, const Author & searchAuthor) {
        std::vector<Book> results;
        for (const Book& book : books) {
            if (book.hasAuthor(searchAuthor)) {
                results.push_back(book);
            }
        }
        return results;
    }

    // ... (rest of the code)

    int main() {
        // Create a vector of books
        std::vector<Book> books;
        // Populate books vector with some books...

        // Search books by name
        std::string searchName = "Great";
        std::vector<Book> booksByName = Book::searchBooksByName(books, searchName);

        // Print results
        std::cout << "Books containing '" << searchName << "' in the name:" << std::endl;
        for (const Book& book : booksByName) {
            book.displayBookInfo();
        }

        // Search books by author
        Author searchAuthor("John", "Doe", "American");
        std::vector<Book> booksByAuthor = Book::searchBooksByAuthor(books, searchAuthor);

        // Print results
        std::cout << "Books by author " << searchAuthor.firstName << " " << searchAuthor.surname << ":" << std::endl;
        for (const Book& book : booksByAuthor) {
            book.displayBookInfo();
        }

        return 0;
    }


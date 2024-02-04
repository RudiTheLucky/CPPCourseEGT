#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
public:
    std::string firstName;
    std::string surname;
    std::string nationality;

    Author(const std::string& first, const std::string& last, const std::string& nation);
};

#endif // AUTHOR_H


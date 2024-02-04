// Purpose of the function
//
//

#include <iostream>
#include <string>
#include "Book.h"
#include "Member.h"
#include <vector>
using namespace std;

int main()
{


    Book b1("Book1", "Author1", "bookID1");
    Book b2("Book2", "Author2", "bookID2");
    Book b3("Book3", "Author1", "bookID1");
    Book b4("Book4", "Author2", "bookID2");
    Book b5("Book5", "Author1", "bookID1");
    Book b6("Book6", "Author2", "bookID2");

    vector<Book> vect{ b1, b2, b3, b4, b5, b6 };
//    Book bookArr[6] {b1, b2, b3, b4, b5, b6};

    for (int i = 0; i < vect.size(); i++ )
    {
        vect.at(i).display();

    }
    Book* bPtr1 = &b1;
    Book* bPtr2 = &b2;

    Member m1("Member1", 29, "memberID1");
    Member m2("Member2", 22, "memberID2");

    Member memberArr[2]{m1, m2};

    memberArr[1].borrowBook(bPtr1);
    memberArr[0].borrowBook(bPtr2);

    return 0;
}

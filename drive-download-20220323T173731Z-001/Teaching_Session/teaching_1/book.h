#ifndef BOOK_H
#define BOOK_H


#include <string>

struct Time 
{
    std::string title{};
    std::string author{};
    int year{};
};

std::string get_author(Book b);
std::string get_title(Book b);

bool operator <(Book const& a, Book const& b);

// x              Makes it so that x is taken by copy
// & x            Makes it so that x is taken by reference
// const x        Makes it so that x is take as a constant
// const& x       Makes it so that x is taken as a reference to a constant


#endif
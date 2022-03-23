#include "book.h"
#include <string>

using namespace std;

string get_author(Book b)
{
    return b.author;
}

string get_title(Book b)
{
    return b.title;
}

bool operator <(Book const& a, Book const& b)
{
    if(a.author != b.author)
        return a.author < b.author;
    else
    {
        return a.title < b.title;
    }
}
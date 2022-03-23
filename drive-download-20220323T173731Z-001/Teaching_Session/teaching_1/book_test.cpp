#include "catch.hpp"
#include <string>
#include "book.h"

using namespace std;

//If you compile a .h-file you get a .gch-file. Remove all .gch files.

/*
	- A library needs a representation of a book for their database

	- Books should be able to be passed around in the system in an easy way
	  (You should only have to use the book as a parameter, not the title, author, etc.)

	- Books should be comparable for sorting (on the name of the author) and one should be
	  able to extract information such as author and title of the book

	- Member variables/traits: author, title, date of publish (any other useful traits of a books?)
*/


TEST_CASE("test bool")
{
    bool b{true};
    string s{"hello world"};
    CHECK(s == "hello world"); //something which can be evaluated to 0 or 1 (true or false)
}


TEST_CASE("book creation")
{
    Book b{};
    CHECK(b.title == "");
    CHECK(b.author == "");
    CHECK(b.year == 0);
}

TEST_CASE("book creation with values")
{
    Book b{"Lord of the Rings", "Bruce Wayne", 2020};
    CHECK(b.title == "Lord of the Rings");
    CHECK(b.author == "Bruce Wayne");
    CHECK(b.year == 2020);
}

TEST_CASE("book getter functions")
{
  Book b{"Harry Potter", "J.K Rowling", 1998};

  SECTION("get_author")
  {
    CHECK(get_author(b) == "J.K Rowling");
  }

  SECTION("get_title")
  {
    CHECK(get_title(b) == "Harry Potter");
  }

}

TEST_CASE("get_author")
{
    Book b{"Harry Potter", "J.K Rowling", 1998};
    CHECK(get_author(b) == "J.K Rowling");
}

TEST_CASE("get_title")
{
    Book b{"Harry Potter", "J.K Rowling", 1998};
    CHECK(get_title(b) == "Harry Potter");
}

TEST_CASE("operator <")
{
  Book a{"Harry Potter", "J.K Rowling", 1998};
  Book b{"Lord of the Rings", "Bruce Wayne", 2020};
  Book c{"Avengers" , "Bruce Wayne", 2020};

  REQUIRE(b < a);
  REQUIRE(c < b);
}


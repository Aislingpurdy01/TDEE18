// Goals
/*
# Created a declaration file related to list-lab
# Introduce the problem in an illustrative way.
# Discuss questions related to the declarations

- What should the class representing the entire list look like? what responsibility does it have?
- What does the Node element inside of the List look like? What responsibility does it have?
- Which public member functions should exist inside of the List class?
- Which public member functions should exist inside of the Node class?
- Which private members should exist in respective class/struct?
- How should the List class be tested to cover as many causes of errors as possible?

*/

/*
    List l2;
    l2.insert(1);
    List l{std::move(l2)};
    CHECK(print(l) == "1");
*/


#pragma once

#include <string>
#include <iostream>

class List
{
public:
    List();
    List(List const& other);    //List l{l2};
    List(List && other);        //List l{}

    ~List();

    List & operator = (List const& other);
    List & operator = (List && other);

    void insert(int value);
    void remove(int index);

    void print() const;

    int at(int index) const;
    int size() const;
    bool is_empty() const;

private:
    struct Node;
    void print_helper(Node * curr) const;

    struct Node
    {
        int value{};
        Node * next{};
        Node * prev{};
    };

    int size{};
    Node * first;
    Node * last
};

void List::print() const
{
    print_helper(first);
    //done with recursion
}

void List::print_helper(Node * curr) const
{
    if(curr != nullptr)
    {
        std::cout << curr -> value;
        print_helper(curr -> next);
    }
}

/*
void List::print() const
{
    Node * curr{first};

    while(curr != nullptr)
    {
        std::cout << curr -> value;
        curr = curr -> next;
    }
}
*/
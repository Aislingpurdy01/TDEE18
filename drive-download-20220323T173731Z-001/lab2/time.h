#ifndef TIME_H
#define TIME_H

#include <string>
#include <iostream>
#include <sstream>

struct Time
{
    int hours{};
    int minutes{};
    int seconds{};
};

bool is_valid(Time const& time);
bool to_string(Time const &time);
bool is_am(Time const& time);

#endif
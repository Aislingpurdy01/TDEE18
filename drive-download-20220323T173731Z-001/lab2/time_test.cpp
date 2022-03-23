#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "time.h"
#include <string>

using namespace std;

TEST_CASE("Time Creation")
{
    Time time{};
    CHECK(time.hours == 0);
    CHECK(time.minutes == 0);
    CHECK(time.seconds == 0);
}

TEST_CASE("Time Valid")
{
    Time time{22,12,25};
    Time t2{-1,8,55};
    CHECK(is_valid(time));
    CHECK_FALSE(is_valid(t2));
}

TEST_CASE("To String")
{
    Time time{22,12,25};
    Time t2("10:12:25 pm");
    CHECK(to_string(time, true) == "22:12:25");
    CHECK(time)
    CHECK_FALSE(t2);
}

// Check if time is am
TEST_CASE("Is AM")
{
    Time time(22,12,25);
    Time t2(07,20,27);
    CHECK(is_am(t2));
    CHECK_FALSE(is_am(time));
}

TEST_CASE("Addition Operator (+)")
{
    Time time(22,12,25);
    Time t2(07,20,27);
    CHECK(to_string(time + 5, true) == "22:12:30");
    CHECK(to_string(t2 + 12, true) == "07:20:39");
}

TEST_CASE("Subtraction Operator (-)")
{
    Time time{22,12,25};
    Time t2{07,20,27};
    CHECK(to_string(time - 5, true) == "22:12:20");
    CHECK(to_string(time - 12, true) == "07:20:15");
}

TEST_CASE("Operation ++")
{
    Time time{22,12,25};
    Time t2{07,20,27};
    CHECK(to_string(time++, true) == "22:12:26");
    CHECK(to_string(--t2, true) == "07:20:27");
}


// Operators -> (==, !=, >, <, >=, <=)
TEST_CASE("Operators '==' ")
{
    Time time(11,37,01);
    Time t2(11,37,01);
    CHECK(time == t2);
}

TEST_CASE("Operators '!=' ")
{
    Time time(11,37,01);
    Time t2(00,20,28);
    CHECK(time != t2);
}


TEST_CASE("Operators '>' ")
{
    Time time(11,37,01);
    Time t2(00,20,28);
    CHECK(time > t2);
    CHECK_FALSE(t2 > time);
}

TEST_CASE("Operators '<' ")
{
    Time time(11,37,01);
    Time t2(00,20,28);
    CHECK(t2 < time);
    CHECK_FALSE(time < t2);
}

TEST_CASE("Operators '>=' ")
{
    Time time(11,37,01);
    Time t2(00,20,28);
    CHECK(time >= t2);
    CHECK_FALSE(t2 >= time);
}

TEST_CASE("Operators '<=' ")
{
    Time time(11,37,01);
    Time t2(00,20,28);
    CHECK(t2 <= time);
    CHECK_FALSE(time <= t2);
}


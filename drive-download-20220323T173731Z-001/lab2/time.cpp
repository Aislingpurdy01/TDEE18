#include "time.h"
#include <iomanip>

using namespace std;

bool is_valid(Time const& time)
{
    if(time.hours < 24 && time.hours >= 0)
    {
        if(time.minutes < 60 && time.minutes >= 0)
        {
            if(time.seconds < 60 && time.seconds >= 0)
            {
                return true;
            }
        }
    }
    return false;
}
 
///  24 hours(check am):
string to_string(Time const &time)
{
    if(!is_am(time)) 
    {
        if(time.hours < 12) 
        {
            time.hours += 12;  // turns to 24hrs
        }
        else if(time.hours = 12) 
        {
            time.hours = hours;
        }   

    else if(is_am(time)) 
    {
        if(time.hours < 12) 
        {
            time.hours = hours;
        }
        else if(time.hours = 12) 
        {
            time.hours = hours;
        }
    } 
}

// Addtion and Subtraction operators:
Time operator+(Time const& time, int add)
{
    time.hours += ((time.seconds + add) / 60) / 60;
    time.minutes += ((time.seconds + add) / 60) % 60;  // modulus operator (remainder)
    time.seconds += (add % 60);
    if (time.hour >= 24)
    {
        time.hour -= 24;
    }
    if (time.minutes >= 60)
    {
        time.minutes -= 60;
        time.hour++;
    }
    if (time.seconds >= 60)
    {
        time.seconds -= 60;
    }
}

Time operator-(Time const& time, int subtract)
{
    time.hours -= ((time.seconds + subtract) / 60) / 60;
    time.minutes -= ((time.seconds + subtract) / 60) % 60;
    time.seconds -= (subtract % 60);
    if (time.hours < 0)
    {
        time.hours += 24;
    }
    if (time.minutes < 0)
    {
        time.minutes += 60;
        time.hour--;
    }
    if (time.seconds < 0)
    {
        time.seconds += 60;
        time.minute--;
    }

    return time;
}


    

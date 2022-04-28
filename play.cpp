#include <iostream>
#include "play.h"

using namespace std;

Play::Play(string t, unsigned int p, unsigned int f)
{
    set_title(t);
    set_price(p);
    set_frequency(f);
}

Play::~Play() {}

string Play::get_title()
{
    return title;
}

unsigned int Play::get_price()
{
    return price;
}

unsigned int Play::get_frequency()
{
    return frequency;
}

void Play::set_title(string new_title)
{
    title = new_title;
}

void Play::set_price(unsigned int new_price)
{
    if (new_price == 0)
    {
        throw invalid_argument("Price must be a positive number!");
    }
    else
    {
        price = new_price;
    }
}

void Play::set_frequency(unsigned int new_frequency)
{
    if (new_frequency == 0)
    {
        throw invalid_argument("Frequency must be a positive number!");
    }
    else
        frequency = new_frequency;
}

std::ostream &operator<<(std::ostream &os, const Play &playy)
{
    os << "Title: " << playy.title << endl
       << "Price: " << playy.price << endl
       << "Frequency: " << playy.frequency << endl;
    return os;
}

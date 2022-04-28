#ifndef play
#define play

#include <iostream>

using namespace std;

class Play
{
protected:
    string title;
    unsigned int price, frequency;

public:
    Play(string title = "title", unsigned int price = 100, unsigned int frequency = 4);

    string get_title();
    unsigned int get_price();
    unsigned int get_frequency();

    virtual ~Play();

    void set_title(string new_title);
    void set_price(unsigned int new_price);
    void set_frequency(unsigned int new_frequency);

    friend std::ostream &operator<<(std::ostream &os, const Play &playy);
};

std::ostream &operator<<(std::ostream &os, const Play &playy);

#endif
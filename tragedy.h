#ifndef tragedy
#define tragedy

#include <iostream>

using namespace std;

class Tragedy : public Play
{
    string tragic_character_name;

public:
    Tragedy(string title, unsigned int price, unsigned int frequency, string tragic_character_name);
};

#endif
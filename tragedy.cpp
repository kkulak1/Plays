#include <iostream>
#include "tragedy.h"
#include "play.h"

using namespace std;

Tragedy::Tragedy(string t, unsigned int p, unsigned int f, string n)
{
    title = t;
    price = p;
    frequency = f;
    tragic_character_name = n;
}

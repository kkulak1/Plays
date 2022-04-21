#ifndef comedy
#define comedy

#include <iostream>

using namespace std;

class Comedy : public Play
{
private:
    unsigned int nfunny_scenes;

public:
    Comedy(string title, unsigned int price, unsigned int frequency, unsigned int nfunny_scenes);
};

#endif
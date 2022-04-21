#ifndef play_list
#define play_list

#include <iostream>
#include <list>
#include <memory>
#include "play.h"

using namespace std;

class Plays_list
{
    list<unique_ptr<Play>> plays;

public:
    void add_play(string title, unsigned int price, unsigned int frequency);
    void add_comedy_play(string title, unsigned int price, unsigned int frequency, unsigned int nfunny_scenes);
    void add_tragedy_play(string title, unsigned int price, unsigned int frequency, string tragic_character_name);
    void add_drama_play(string title, unsigned int price, unsigned int frequency, string main_drama_thread);
};

#endif
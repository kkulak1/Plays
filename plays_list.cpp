#include <iostream>
#include "play.h"
#include "comedy.h"
#include "drama.h"
#include "tragedy.h"
#include "plays_list.h"

using namespace std;

void Plays_list::add_play(string title, unsigned int price, unsigned int frequency)
{
    unique_ptr<Play> added_play = make_unique<Play>(title, price, frequency);
    plays.push_back(move(added_play));
}

void Plays_list::add_comedy_play(string title, unsigned int price, unsigned int frequency, unsigned int nfunny_scenes)
{
    unique_ptr<Comedy> added_comedy = make_unique<Comedy>(title, price, frequency, nfunny_scenes);
    plays.push_back(move(added_comedy));
}

void Plays_list::add_tragedy_play(string title, unsigned int price, unsigned int frequency, string tragic_character_name)
{
    unique_ptr<Tragedy> added_tragedy = make_unique<Tragedy>(title, price, frequency, tragic_character_name);
    plays.push_back(move(added_tragedy));
}

void Plays_list::add_drama_play(string title, unsigned int price, unsigned int frequency, string main_drama_thread)
{
    unique_ptr<Drama> added_drama = make_unique<Drama>(title, price, frequency, main_drama_thread);
    plays.push_back(move(added_drama));
}

#include <iostream>
#include "drama.h"
#include "play.h"

using namespace std;

Drama::Drama(string t, unsigned int p, unsigned int f, string mdt)
{
    set_title(t);
    set_price(p);
    set_frequency(f);
    set_main_drama_thread(mdt);
}

string Drama::get_main_drama_thread()
{
    return main_drama_thread;
}

void Drama::set_main_drama_thread(string new_drama_thread)
{
    main_drama_thread = new_drama_thread;
}

std::ostream &operator<<(std::ostream &os, const Drama &dramaa)
{
    os << "Title: " << dramaa.title << endl
       << "Price: " << dramaa.price << endl
       << "Frequency: " << dramaa.frequency << endl
       << "Main drama thread: " << dramaa.main_drama_thread << endl;
    return os;
}
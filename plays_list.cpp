#include <iostream>
#include <list>
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

void Plays_list::print_list()
{
    for (list<unique_ptr<Play>>::iterator i = plays.begin(); i != plays.end(); i++)
    {
        cout << (*i)->get_title() << endl;
        // cout << (**i);
    }
}

void Plays_list::search_a_play(string new_title)
{
    int check = 0;
    for (list<unique_ptr<Play>>::iterator i = plays.begin(); i != plays.end(); i++)
    {
        if ((*i)->get_title() == new_title)
        {
            int del;
            check++;
            cout << "Play found!" << endl;
            cout << (**i) << endl;
            cout << "Do you want to delete it?" << endl
                 << "1. yes" << endl
                 << "2.no" << endl;
            cin >> del;
            if (del == 1)
            {
                plays.erase(i);
            }
            if (del != 1 && del != 2)
            {
                cout << "Wrong number!";
            }
        }
        if (check == 0)
        {
            cout << "Play not found!";
        }
    }
}

double Plays_list::calculate_total_price() const noexcept
{
    double total_price = 0.0;
    cout << "_________________" << endl;
    for (const auto &play_ptr : plays)
    {
        cout << play_ptr->get_title() << " - " << play_ptr->get_price() << endl;
        total_price += play_ptr->get_price();
    }
    cout << "_________________" << endl;
    cout << "Total price: " << total_price << endl;
    return total_price;
}
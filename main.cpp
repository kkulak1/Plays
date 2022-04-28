#include <iostream>
#include "plays_list.h"
#include "comedy.h"
#include "drama.h"
#include "tragedy.h"

using namespace std;

int main()
{
    Plays_list plays_list;

    Play play1("Manga", 50, 4);
    Comedy comedy1("Laaala", 100, 5, 7);

    cout << play1 << endl;
    cout << comedy1;

    plays_list.add_play("Tara", 100, 3);
    plays_list.add_comedy_play("Lessy", 100, 6, 8);

    while (true)
    {
        cout << "\nPlays\n";
        cout << "Choose a number:\n";
        cout << "1. List of plays titles.\n";
        cout << "2. Search a play.\n";
        cout << "3. Price of plays.\n";
        cout << "4. Add play.\n";
        cout << "5. Exit\n";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            system("cls");
            plays_list.print_list();
        }
        else if (choice == 2)
        {
            system("cls");
            string title;
            cout << "Enter title: ";
            cin >> title;
            plays_list.search_a_play(title);
        }
        else if (choice == 3)
        {
            system("cls");
            plays_list.calculate_total_price();
        }
        else if (choice == 4)
        {
            system("cls");
            string new_title;
            unsigned int new_price, new_freq;
            cout << "Enter titile: ";
            cin >> new_title;
            cout << endl
                 << "Enter price: ";
            cin >> new_price;
            cout << endl
                 << "Enter frequency: ";
            cin >> new_freq;
            plays_list.add_play(new_title, new_price, new_freq);
            plays_list.print_list();
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            cout << "Wrong number!";
        }
    }

    return 0;
}
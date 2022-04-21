#ifndef drama
#define drama

#include <iostream>

using namespace std;

class Drama : public Play
{
    string main_drama_thread;

public:
    Drama(string title, unsigned int price, unsigned int frequency, string main_drama_thread);

    string get_main_drama_thread();

    void set_main_drama_thread(string new_main_drama_thread);

    friend std::ostream &operator<<(std::ostream &os, const Drama &dramaa);
};

std::ostream &operator<<(std::ostream &os, const Drama &dramaa);

#endif
#include "catch.hpp"
#include "../comedy.h"
#include "../drama.h"
#include "../play.h"
#include "../plays_list.h"
#include "../tragedy.h"

TEST_CASE("comedy simple tests")
{
    Comedy comedy("Manga", 100, 10, 5);

    CHECK(comedy.get_title() == "Manga");
    CHECK(comedy.get_price() == 100);
    CHECK(comedy.get_frequency() == 10);
    CHECK(comedy.get_nfunny_scenes() == 5);

    SECTION("test setters")
    {
        comedy.set_price(200);
        CHECK(comedy.get_title() == "Manga");
        CHECK(comedy.get_price() == 200);
        CHECK(comedy.get_frequency() == 10);
        CHECK(comedy.get_nfunny_scenes() == 5);

        comedy.set_frequency(6);
        CHECK(comedy.get_title() == "Manga");
        CHECK(comedy.get_price() == 200);
        CHECK(comedy.get_frequency() == 6);
        CHECK(comedy.get_nfunny_scenes() == 5);

        comedy.set_title("Taraa");
        CHECK(comedy.get_title() == "Taraa");
        CHECK(comedy.get_price() == 200);
        CHECK(comedy.get_frequency() == 6);
        CHECK(comedy.get_nfunny_scenes() == 5);

        comedy.set_nfunny_scenes(7);
        CHECK(comedy.get_title() == "Taraa");
        CHECK(comedy.get_price() == 200);
        CHECK(comedy.get_frequency() == 6);
        CHECK(comedy.get_nfunny_scenes() == 7);
    }
}

TEST_CASE("drama simple tests")
{
    Drama drama1("Dasa", 90, 3, "double kill");

    CHECK(drama1.get_title() == "Dasa");
    CHECK(drama1.get_price() == 90);
    CHECK(drama1.get_frequency() == 3);
    CHECK(drama1.get_main_drama_thread() == "double kill");

    SECTION("test setters")
    {
        drama1.set_title("Mala");
        drama1.set_price(100);
        drama1.set_frequency(4);
        drama1.set_main_drama_thread("murder");

        CHECK(drama1.get_title() == "Mala");
        CHECK(drama1.get_price() == 100);
        CHECK(drama1.get_frequency() == 4);
        CHECK(drama1.get_main_drama_thread() == "murder");
    }
}

TEST_CASE("test data list")
{
    Plays_list data;

    data.add_play("Maga", 100, 1);
    data.add_comedy_play("Tara", 90, 2, 5);
    data.add_drama_play("Tiko", 80, 3, "murder");
    data.add_tragedy_play("Colt", 70, 4, "Pudzian");

    CHECK(data.calculate_total_price() == 340);
    CHECK(data.calculate_frequency() == 10.0);

    data.add_play("Kala", 20, 4);

    CHECK(data.calculate_total_price() == 360);
    CHECK(data.calculate_frequency() == 14.0);
}

TEST_CASE("tragedy simple tests")
{
    Tragedy tragedyy("Manga", 100, 10, "Mosa");

    CHECK(tragedyy.get_title() == "Manga");
    CHECK(tragedyy.get_price() == 100);
    CHECK(tragedyy.get_frequency() == 10);
    CHECK(tragedyy.get_tragic_character_name() == "Mosa");

    SECTION("test setters")
    {
        tragedyy.set_price(200);
        CHECK(tragedyy.get_title() == "Manga");
        CHECK(tragedyy.get_price() == 200);
        CHECK(tragedyy.get_frequency() == 10);
        CHECK(tragedyy.get_tragic_character_name() == "Mosa");

        tragedyy.set_frequency(6);
        CHECK(tragedyy.get_title() == "Manga");
        CHECK(tragedyy.get_price() == 200);
        CHECK(tragedyy.get_frequency() == 6);
        CHECK(tragedyy.get_tragic_character_name() == "Mosa");

        tragedyy.set_title("Taraa");
        CHECK(tragedyy.get_title() == "Taraa");
        CHECK(tragedyy.get_price() == 200);
        CHECK(tragedyy.get_frequency() == 6);
        CHECK(tragedyy.get_tragic_character_name() == "Mosa");

        tragedyy.set_tragic_charactesr_name("Jaba");
        CHECK(tragedyy.get_title() == "Taraa");
        CHECK(tragedyy.get_price() == 200);
        CHECK(tragedyy.get_frequency() == 6);
        CHECK(tragedyy.get_tragic_character_name() == "Jaba");
    }
}

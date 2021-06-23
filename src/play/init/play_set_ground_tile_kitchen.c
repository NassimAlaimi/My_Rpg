/*
** EPITECH PROJECT, 2021
** play_set_ground_tile_kitchen.c
** File description:
** funcs to init kitchen
*/

#include "my.h"

void play_set_ground_tile_kitchen_top(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 2102)
        set_rect(play->ground_sprite[y][x], (sfIntRect){21*32, 25*32, 32, 32});
    if (play->ground_int_array[y][x] == 1973)
        set_rect(play->ground_sprite[y][x], (sfIntRect){20*32, 21*32, 32, 32});
    if (play->ground_int_array[y][x] == 1974)
        set_rect(play->ground_sprite[y][x], (sfIntRect){21*32, 21*32, 32, 32});
    if (play->ground_int_array[y][x] == 1975)
        set_rect(play->ground_sprite[y][x], (sfIntRect){22*32, 21*32, 32, 32});
    if (play->ground_int_array[y][x] == 1502)
        set_rect(play->ground_sprite[y][x], (sfIntRect){29*32, 6*32, 32, 32});
    if (play->ground_int_array[y][x] == 1503)
        set_rect(play->ground_sprite[y][x], (sfIntRect){30*32, 6*32, 32, 32});
}

void play_set_ground_tile_kitchen_middle(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1504)
        set_rect(play->ground_sprite[y][x], (sfIntRect){31*32, 6*32, 32, 32});
    if (play->ground_int_array[y][x] == 2005)
        set_rect(play->ground_sprite[y][x], (sfIntRect){20*32, 22*32, 32, 32});
    if (play->ground_int_array[y][x] == 2006)
        set_rect(play->ground_sprite[y][x], (sfIntRect){21*32, 22*32, 32, 32});
    if (play->ground_int_array[y][x] == 2007)
        set_rect(play->ground_sprite[y][x], (sfIntRect){22*32, 22*32, 32, 32});
    if (play->ground_int_array[y][x] == 1631)
        set_rect(play->ground_sprite[y][x], (sfIntRect){30*32, 10*32, 32, 32});
    if (play->ground_int_array[y][x] == 1534)
        set_rect(play->ground_sprite[y][x], (sfIntRect){29*32, 7*32, 32, 32});
}

void play_set_ground_tile_kitchen_bottom(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1535)
        set_rect(play->ground_sprite[y][x], (sfIntRect){30*32, 7*32, 32, 32});
    if (play->ground_int_array[y][x] == 1536)
        set_rect(play->ground_sprite[y][x], (sfIntRect){31*32, 7*32, 32, 32});
    if (play->ground_int_array[y][x] == 2037)
        set_rect(play->ground_sprite[y][x], (sfIntRect){20*32, 23*32, 32, 32});
    if (play->ground_int_array[y][x] == 2038)
        set_rect(play->ground_sprite[y][x], (sfIntRect){21*32, 23*32, 32, 32});
    if (play->ground_int_array[y][x] == 2039)
        set_rect(play->ground_sprite[y][x], (sfIntRect){22*32, 23*32, 32, 32});
    if (play->ground_int_array[y][x] == 1568)
        set_rect(play->ground_sprite[y][x], (sfIntRect){31*32, 7*32, 32, 32});
}
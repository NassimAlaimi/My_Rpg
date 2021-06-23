/*
** EPITECH PROJECT, 2021
** play_init_tiles_laundry.c
** File description:
** funcs to init tiles in laundry
*/

#include "my.h"

void play_set_ground_tile_laundry_top(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1692)
        set_rect(play->ground_sprite[y][x], (sfIntRect){27*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1693)
        set_rect(play->ground_sprite[y][x], (sfIntRect){28*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1694)
        set_rect(play->ground_sprite[y][x], (sfIntRect){29*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1724)
        set_rect(play->ground_sprite[y][x], (sfIntRect){27*32, 13*32, 32, 32});
    if (play->ground_int_array[y][x] == 1725)
        set_rect(play->ground_sprite[y][x], (sfIntRect){28*32, 13*32, 32, 32});
}

void play_set_ground_tile_laundry_bottom(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1726)
        set_rect(play->ground_sprite[y][x], (sfIntRect){29*32, 13*32, 32, 32});
    if (play->ground_int_array[y][x] == 1821)
        set_rect(play->ground_sprite[y][x], (sfIntRect){28*32, 16*32, 32, 32});
    if (play->ground_int_array[y][x] == 1756)
        set_rect(play->ground_sprite[y][x], (sfIntRect){27*32, 14*32, 32, 32});
    if (play->ground_int_array[y][x] == 1757)
        set_rect(play->ground_sprite[y][x], (sfIntRect){28*32, 14*32, 32, 32});
    if (play->ground_int_array[y][x] == 1758)
        set_rect(play->ground_sprite[y][x], (sfIntRect){29*32, 14*32, 32, 32});
}
/*
** EPITECH PROJECT, 2021
** play_init_tiles_library.c
** File description:
** funcs to init tiles in library
*/

#include "my.h"

void play_init_tile_library_top(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1687)
        set_rect(play->ground_sprite[y][x], (sfIntRect){22*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1688)
        set_rect(play->ground_sprite[y][x], (sfIntRect){23*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1689)
        set_rect(play->ground_sprite[y][x], (sfIntRect){24*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1719)
        set_rect(play->ground_sprite[y][x], (sfIntRect){22*32, 13*32, 32, 32});
    if (play->ground_int_array[y][x] == 1720)
        set_rect(play->ground_sprite[y][x], (sfIntRect){23*32, 13*32, 32, 32});
    if (play->ground_int_array[y][x] == 1721)
        set_rect(play->ground_sprite[y][x], (sfIntRect){24*32, 13*32, 32, 32});
}

void play_init_tile_library_bottom(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1723)
        set_rect(play->ground_sprite[y][x], (sfIntRect){23*32, 16*32, 32, 32});
    if (play->ground_int_array[y][x] == 1751)
        set_rect(play->ground_sprite[y][x], (sfIntRect){22*32, 14*32, 32, 32});
    if (play->ground_int_array[y][x] == 1752)
        set_rect(play->ground_sprite[y][x], (sfIntRect){23*32, 14*32, 32, 32});
    if (play->ground_int_array[y][x] == 1753)
        set_rect(play->ground_sprite[y][x], (sfIntRect){24*32, 14*32, 32, 32});
    if (play->ground_int_array[y][x] == 1816)
        set_rect(play->ground_sprite[y][x], (sfIntRect){23*32, 16*32, 32, 32});
}
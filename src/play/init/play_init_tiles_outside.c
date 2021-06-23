/*
** EPITECH PROJECT, 2021
** play_init_tiles_outside.c
** File description:
** functions to initialize tiles outside
*/

#include "my.h"

void play_set_ground_tile_ventilation(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1773)
        set_rect(play->ground_sprite[y][x], (sfIntRect){12*32, 15*32, 32, 32});
    if (play->ground_int_array[y][x] == 1772)
        set_rect(play->ground_sprite[y][x], (sfIntRect){11*32, 15*32, 32, 32});
    if (play->ground_int_array[y][x] == 1741)
        set_rect(play->ground_sprite[y][x], (sfIntRect){12*32, 14*32, 32, 32});
}

void play_set_tiles_outside(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1729)
        set_rect(play->ground_sprite[y][x], (sfIntRect){3*32, 2*32, 32, 32});
    if (play->ground_int_array[y][x] == 1763)
        set_rect(play->ground_sprite[y][x], (sfIntRect){5*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1380)
        set_rect(play->ground_sprite[y][x], (sfIntRect){3*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1350)
        set_rect(play->ground_sprite[y][x], (sfIntRect){5*32, 2*32, 32, 32});
    if (play->ground_int_array[y][x] == 1349)
        set_rect(play->ground_sprite[y][x], (sfIntRect){4*32, 2*32, 32, 32});
    if (play->ground_int_array[y][x] == 1993)
        set_rect(play->ground_sprite[y][x], (sfIntRect){8*32, 22*32, 32, 32});
    if (play->ground_int_array[y][x] == 1865)
        set_rect(play->ground_sprite[y][x], (sfIntRect){8*32, 18*32, 32, 32});
    if (play->ground_int_array[y][x] == 2025)
        set_rect(play->ground_sprite[y][x], (sfIntRect){8*32, 18*32, 32, 32});
}
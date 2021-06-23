/*
** EPITECH PROJECT, 2021
** play_init_walls_extra.c
** File description:
** functions to initialize extra walls
*/

#include "my.h"

void play_set_walls_tiles_cell_furniture(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 641)
        set_rect(play->walls_sprite[y][x], (sfIntRect){0*32, 18*32, 32, 32});
    if (play->walls_int_array[y][x] == 577)
        set_rect(play->walls_sprite[y][x], (sfIntRect){0*32, 19*32, 32, 32});
    if (play->walls_int_array[y][x] == 609)
        set_rect(play->walls_sprite[y][x], (sfIntRect){0*32, 20*32, 32, 32});
}

void play_set_walls_tiles_cell_laundry(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 519)
        set_rect(play->walls_sprite[y][x], (sfIntRect){6*32, 16*32, 32, 32});
    if (play->walls_int_array[y][x] == 551)
        set_rect(play->walls_sprite[y][x], (sfIntRect){6*32, 17*32, 32, 32});
}

void play_set_walls_tiles_cell_library(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 491)
        set_rect(play->walls_sprite[y][x], (sfIntRect){10*32, 15*32, 32, 32});
    if (play->walls_int_array[y][x] == 492)
        set_rect(play->walls_sprite[y][x], (sfIntRect){11*32, 15*32, 32, 32});
    if (play->walls_int_array[y][x] == 462)
        set_rect(play->walls_sprite[y][x], (sfIntRect){13*32, 14*32, 32, 32});
    if (play->walls_int_array[y][x] == 461)
        set_rect(play->walls_sprite[y][x], (sfIntRect){12*32, 14*32, 32, 32});
}

void play_set_walls_tiles_cell_showers(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 500)
        set_rect(play->walls_sprite[y][x], (sfIntRect){19*32, 15*32, 32, 32});
    if (play->walls_int_array[y][x] == 499)
        set_rect(play->walls_sprite[y][x], (sfIntRect){18*32, 15*32, 32, 32});
}

void play_set_walls_tiles_cell_entrance(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 485)
        set_rect(play->walls_sprite[y][x], (sfIntRect){4*32, 15*32, 32, 32});
    if (play->walls_int_array[y][x] == 600)
        set_rect(play->walls_sprite[y][x], (sfIntRect){23*32, 18*32, 32, 32});
    if (play->walls_int_array[y][x] == 601)
        set_rect(play->walls_sprite[y][x], (sfIntRect){24*32, 18*32, 32, 32});
    if (play->walls_int_array[y][x] == 602)
        set_rect(play->walls_sprite[y][x], (sfIntRect){25*32, 18*32, 32, 32});
    if (play->walls_int_array[y][x] == 603)
        set_rect(play->walls_sprite[y][x], (sfIntRect){26*32, 18*32, 32, 32});
    if (play->walls_int_array[y][x] == 604)
        set_rect(play->walls_sprite[y][x], (sfIntRect){27*32, 18*32, 32, 32});
}
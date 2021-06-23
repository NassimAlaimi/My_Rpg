/*
** EPITECH PROJECT, 2021
** play_init_walls_kitchen.c
** File description:
** functions to set tiles from kitchen
*/

#include "my.h"

void play_set_walls_tiles_cell_kitchen_left(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 534)
        set_rect(play->walls_sprite[y][x], (sfIntRect){21*32, 16*32, 32, 32});
    if (play->walls_int_array[y][x] == 535)
        set_rect(play->walls_sprite[y][x], (sfIntRect){22*32, 16*32, 32, 32});
    if (play->walls_int_array[y][x] == 436)
        set_rect(play->walls_sprite[y][x], (sfIntRect){19*32, 13*32, 32, 32});
    if (play->walls_int_array[y][x] == 437)
        set_rect(play->walls_sprite[y][x], (sfIntRect){20*32, 13*32, 32, 32});
    if (play->walls_int_array[y][x] == 468)
        set_rect(play->walls_sprite[y][x], (sfIntRect){19*32, 14*32, 32, 32});
    if (play->walls_int_array[y][x] == 469)
        set_rect(play->walls_sprite[y][x], (sfIntRect){20*32, 14*32, 32, 32});
}

void play_set_walls_tiles_cell_kitchen_right(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 948)
        set_rect(play->walls_sprite[y][x], (sfIntRect){19*32, 29*32, 32, 32});
    if (play->walls_int_array[y][x] == 626)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 19*32, 32, 32});
    if (play->walls_int_array[y][x] == 658)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 20*32, 32, 32});
    if (play->walls_int_array[y][x] == 690)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 21*32, 32, 32});
    if (play->walls_int_array[y][x] == 722)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 22*32, 32, 32});
    if (play->walls_int_array[y][x] == 754)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 23*32, 32, 32});
    if (play->walls_int_array[y][x] == 786)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 24*32, 32, 32});
}

void play_set_walls_tiles_cell_kitchen(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 850)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 26*32, 32, 32});
    if (play->walls_int_array[y][x] == 851)
        set_rect(play->walls_sprite[y][x], (sfIntRect){18*32, 26*32, 32, 32});
    if (play->walls_int_array[y][x] == 882)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 27*32, 32, 32});
    if (play->walls_int_array[y][x] == 883)
        set_rect(play->walls_sprite[y][x], (sfIntRect){18*32, 27*32, 32, 32});
    if (play->walls_int_array[y][x] == 914)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 28*32, 32, 32});
    if (play->walls_int_array[y][x] == 915)
        set_rect(play->walls_sprite[y][x], (sfIntRect){18*32, 28*32, 32, 32});
    if (play->walls_int_array[y][x] == 946)
        set_rect(play->walls_sprite[y][x], (sfIntRect){17*32, 29*32, 32, 32});
    if (play->walls_int_array[y][x] == 947)
        set_rect(play->walls_sprite[y][x], (sfIntRect){18*32, 29*32, 32, 32});
    play_set_walls_tiles_cell_kitchen_left(play, y, x);
    play_set_walls_tiles_cell_kitchen_right(play, y, x);
}
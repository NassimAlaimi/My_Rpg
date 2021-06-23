/*
** EPITECH PROJECT, 2021
** play_init_tiles_shower.c
** File description:
** funcs to init showers
*/

#include "my.h"

void play_init_tiles_shower_top(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1422)
        set_rect(play->ground_sprite[y][x], (sfIntRect){13*32, 4*32, 32, 32});
    if (play->ground_int_array[y][x] == 1325)
        set_rect(play->ground_sprite[y][x], (sfIntRect){14*32, 4*32, 32, 32});
    if (play->ground_int_array[y][x] == 1294)
        set_rect(play->ground_sprite[y][x], (sfIntRect){13*32, 5*32, 32, 32});
    if (play->ground_int_array[y][x] == 1295)
        set_rect(play->ground_sprite[y][x], (sfIntRect){14*32, 0, 32, 32});
    if (play->ground_int_array[y][x] == 1293)
        set_rect(play->ground_sprite[y][x], (sfIntRect){12*32, 0, 32, 32});
    if (play->ground_int_array[y][x] == 1454)
        set_rect(play->ground_sprite[y][x], (sfIntRect){13*32, 5*32, 32, 32});
    if (play->ground_int_array[y][x] == 1455)
        set_rect(play->ground_sprite[y][x], (sfIntRect){14*32, 5*32, 32, 32});
    if (play->ground_int_array[y][x] == 1326)
        set_rect(play->ground_sprite[y][x], (sfIntRect){13*32, 1*32, 32, 32});
    if (play->ground_int_array[y][x] == 1453)
        set_rect(play->ground_sprite[y][x], (sfIntRect){12*32, 5*32, 32, 32});
    if (play->ground_int_array[y][x] == 1327)
        set_rect(play->ground_sprite[y][x], (sfIntRect){12*32, 4*32, 32, 32});
}

void play_init_tiles_shower_bottom(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1328)
        set_rect(play->ground_sprite[y][x], (sfIntRect){13*32, 1*32, 32, 32});
    if (play->ground_int_array[y][x] == 1389)
        set_rect(play->ground_sprite[y][x], (sfIntRect){12*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1390)
        set_rect(play->ground_sprite[y][x], (sfIntRect){13*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1391)
        set_rect(play->ground_sprite[y][x], (sfIntRect){14*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1359)
        set_rect(play->ground_sprite[y][x], (sfIntRect){14*32, 2*32, 32, 32});
    if (play->ground_int_array[y][x] == 1357)
        set_rect(play->ground_sprite[y][x], (sfIntRect){12*32, 2*32, 32, 32});
    if (play->ground_int_array[y][x] == 1392)
        set_rect(play->ground_sprite[y][x], (sfIntRect){13*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1358)
        set_rect(play->ground_sprite[y][x], (sfIntRect){13*32, 3*32, 32, 32});
}
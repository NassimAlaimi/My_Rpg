/*
** EPITECH PROJECT, 2021
** play_init_walls_top.c
** File description:
** functions to initialize top walls
*/

#include "my.h"

void play_set_tiles_top(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 193)
        set_rect(play->walls_sprite[y][x], (sfIntRect){0*32, 6*32, 32, 32});
    if (play->walls_int_array[y][x] == 194)
        set_rect(play->walls_sprite[y][x], (sfIntRect){1*32, 6*32, 32, 32});
    if (play->walls_int_array[y][x] == 196)
        set_rect(play->walls_sprite[y][x], (sfIntRect){3*32, 6*32, 32, 32});
    if (play->walls_int_array[y][x] == 197)
        set_rect(play->walls_sprite[y][x], (sfIntRect){4*32, 6*32, 32, 32});
    if (play->walls_int_array[y][x] == 229)
        set_rect(play->walls_sprite[y][x], (sfIntRect){4*32, 7*32, 32, 32});
    if (play->walls_int_array[y][x] == 198)
        set_rect(play->walls_sprite[y][x], (sfIntRect){5*32, 6*32, 32, 32});
    if (play->walls_int_array[y][x] == 225)
        set_rect(play->walls_sprite[y][x], (sfIntRect){0*32, 7*32, 32, 32});
    if (play->walls_int_array[y][x] == 230)
        set_rect(play->walls_sprite[y][x], (sfIntRect){4*32, 9*32, 32, 32});
    if (play->walls_int_array[y][x] == 257)
        set_rect(play->walls_sprite[y][x], (sfIntRect){5*32, 8*32, 32, 32});
    if (play->walls_int_array[y][x] == 294)
        set_rect(play->walls_sprite[y][x], (sfIntRect){5*32, 8*32, 32, 32});
}

void play_set_tiles_middle(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 326)
        set_rect(play->walls_sprite[y][x], (sfIntRect){5*32, 10*32, 32, 32});
    if (play->walls_int_array[y][x] == 387)
        set_rect(play->walls_sprite[y][x], (sfIntRect){2*32, 12*32, 32, 32});
    if (play->walls_int_array[y][x] == 388)
        set_rect(play->walls_sprite[y][x], (sfIntRect){3*32, 12*32, 32, 32});
    if (play->walls_int_array[y][x] == 226)
        set_rect(play->walls_sprite[y][x], (sfIntRect){3*32, 7*32, 32, 32});
    if (play->walls_int_array[y][x] == 258)
        set_rect(play->walls_sprite[y][x], (sfIntRect){1*32, 8*32, 32, 32});
    if (play->walls_int_array[y][x] == 291)
        set_rect(play->walls_sprite[y][x], (sfIntRect){2*32, 9*32, 32, 32});
    if (play->walls_int_array[y][x] == 358)
        set_rect(play->walls_sprite[y][x], (sfIntRect){5*32, 11*32, 32, 32});
    if (play->walls_int_array[y][x] == 389)
        set_rect(play->walls_sprite[y][x], (sfIntRect){4*32, 12*32, 32, 32});
    if (play->walls_int_array[y][x] == 261)
        set_rect(play->walls_sprite[y][x], (sfIntRect){4*32, 8*32, 32, 32});
    if (play->walls_int_array[y][x] == 293)
        set_rect(play->walls_sprite[y][x], (sfIntRect){4*32, 9*32, 32, 32});
}

void play_set_tiles_bottom(play_s *play, int y, int x)
{
    if (play->walls_int_array[y][x] == 321)
        set_rect(play->walls_sprite[y][x], (sfIntRect){0*32, 10*32, 32, 32});
    if (play->walls_int_array[y][x] == 353)
        set_rect(play->walls_sprite[y][x], (sfIntRect){0*32, 11*32, 32, 32});
    if (play->walls_int_array[y][x] == 354)
        set_rect(play->walls_sprite[y][x], (sfIntRect){1*32, 11*32, 32, 32});
    if (play->walls_int_array[y][x] == 391)
        set_rect(play->walls_sprite[y][x], (sfIntRect){6*32, 12*32, 32, 32});
    if (play->walls_int_array[y][x] == 324)
        set_rect(play->walls_sprite[y][x], (sfIntRect){0*32, 11*32, 32, 32});
    if (play->walls_int_array[y][x] == 325)
        set_rect(play->walls_sprite[y][x], (sfIntRect){6*32, 14*32, 32, 32});
}
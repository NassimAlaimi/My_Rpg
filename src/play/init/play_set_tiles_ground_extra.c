/*
** EPITECH PROJECT, 2021
** play_set_tiles_ground_extra.c
** File description:
** funcs to init extra tiles
*/

#include "my.h"

void play_set_tiles_ground_extra_top(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1698)
        set_rect(play->ground_sprite[y][x], (sfIntRect){4*32, 32, 32, 32});
    if (play->ground_int_array[y][x] == 1960)
        set_rect(play->ground_sprite[y][x], (sfIntRect){7*32, 21*32, 32, 32});
    if (play->ground_int_array[y][x] == 1961)
        set_rect(play->ground_sprite[y][x], (sfIntRect){8*32, 21*32, 32, 32});
    if (play->ground_int_array[y][x] == 1962)
        set_rect(play->ground_sprite[y][x], (sfIntRect){9*32, 21*32, 32, 32});
    if (play->ground_int_array[y][x] == 1898)
        set_rect(play->ground_sprite[y][x], (sfIntRect){7*32, 22*32, 32, 32});
    if (play->ground_int_array[y][x] == 1994)
        set_rect(play->ground_sprite[y][x], (sfIntRect){9*32, 22*32, 32, 32});
    if (play->ground_int_array[y][x] == 1992)
        set_rect(play->ground_sprite[y][x], (sfIntRect){7*32, 22*32, 32, 32});
    if (play->ground_int_array[y][x] == 1929)
        set_rect(play->ground_sprite[y][x], (sfIntRect){8*32, 21*32, 32, 32});
    if (play->ground_int_array[y][x] == 1930)
        set_rect(play->ground_sprite[y][x], (sfIntRect){9*32, 20*32, 32, 32});
    if (play->ground_int_array[y][x] == 1666)
        set_rect(play->ground_sprite[y][x], (sfIntRect){4*32, 0, 32, 32});
}

void play_set_tiles_ground_extra_middle(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1667)
        set_rect(play->ground_sprite[y][x], (sfIntRect){5*32, 0, 32, 32});
    if (play->ground_int_array[y][x] == 1665)
        set_rect(play->ground_sprite[y][x], (sfIntRect){3*32, 0, 32, 32});
    if (play->ground_int_array[y][x] == 2024)
        set_rect(play->ground_sprite[y][x], (sfIntRect){7*32, 23*32, 32, 32});
    if (play->ground_int_array[y][x] == 1866)
        set_rect(play->ground_sprite[y][x], (sfIntRect){9*32, 18*32, 32, 32});
    if (play->ground_int_array[y][x] == 1827)
        set_rect(play->ground_sprite[y][x], (sfIntRect){5*32, 5*32, 32, 32});
    if (play->ground_int_array[y][x] == 1825)
        set_rect(play->ground_sprite[y][x], (sfIntRect){3*32, 5*32, 32, 32});
    if (play->ground_int_array[y][x] == 1928)
        set_rect(play->ground_sprite[y][x], (sfIntRect){7*32, 20*32, 32, 32});
    if (play->ground_int_array[y][x] == 1864)
        set_rect(play->ground_sprite[y][x], (sfIntRect){7*32, 18*32, 32, 32});
    if (play->ground_int_array[y][x] == 2026)
        set_rect(play->ground_sprite[y][x], (sfIntRect){9*32, 23*32, 32, 32});
    if (play->ground_int_array[y][x] == 1795)
        set_rect(play->ground_sprite[y][x], (sfIntRect){3*32, 1*32, 32, 32});
}

void play_set_tiles_ground_extra_bottom(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1318)
        set_rect(play->ground_sprite[y][x], (sfIntRect){5*32, 1*32, 32, 32});
    if (play->ground_int_array[y][x] == 1896)
        set_rect(play->ground_sprite[y][x], (sfIntRect){7*32, 19*32, 32, 32});
    if (play->ground_int_array[y][x] == 1697)
        set_rect(play->ground_sprite[y][x], (sfIntRect){3*32, 1*32, 32, 32});
    if (play->ground_int_array[y][x] == 1316)
        set_rect(play->ground_sprite[y][x], (sfIntRect){3*32, 1*32, 32, 32});
    if (play->ground_int_array[y][x] == 1297)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 0, 32, 32});
    if (play->ground_int_array[y][x] == 1458)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 0, 32, 32});
    if (play->ground_int_array[y][x] == 1299)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 0, 32, 32});
    if (play->ground_int_array[y][x] == 1681)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1842)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1683)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 12*32, 32, 32});
}

void play_set_tiles_ground_extra_left(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1329)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 32, 32, 32});
    if (play->ground_int_array[y][x] == 1330)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 32, 32, 32});
    if (play->ground_int_array[y][x] == 1331)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 32, 32, 32});
    if (play->ground_int_array[y][x] == 1713)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 13*32, 32, 32});
    if (play->ground_int_array[y][x] == 1714)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 13*32, 32, 32});
    if (play->ground_int_array[y][x] == 1809)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 13*32, 32, 32});
    if (play->ground_int_array[y][x] == 1777)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 15*32, 32, 32});
    if (play->ground_int_array[y][x] == 1746)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 14*32, 32, 32});
    if (play->ground_int_array[y][x] == 1779)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 15*32, 32, 32});
    if (play->ground_int_array[y][x] == 1778)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 14*32, 32, 32});
}

void play_set_tiles_ground_extra_right(play_s *play, int y, int x)
{
    if (play->ground_int_array[y][x] == 1747)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 14*32, 32, 32});
    if (play->ground_int_array[y][x] == 1361)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 2*32, 32, 32});
    if (play->ground_int_array[y][x] == 1395)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1393)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1363)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 2*32, 32, 32});
    if (play->ground_int_array[y][x] == 1810)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 16*32, 32, 32});
    if (play->ground_int_array[y][x] == 1745)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 14*32, 32, 32});
    if (play->ground_int_array[y][x] == 1459)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 5*32, 32, 32});
    if (play->ground_int_array[y][x] == 1457)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 5*32, 32, 32});
    if (play->ground_int_array[y][x] == 1843)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 17*32, 32, 32});
}
/*
** EPITECH PROJECT, 2021
** play_init_ground.c
** File description:
** functions to initialize map
*/

#include "my.h"

void play_set_tiles_ground_extra(play_s *play, int y, int x)
{
    play_set_tiles_ground_extra_top(play, y, x);
    play_set_tiles_ground_extra_middle(play, y, x);
    play_set_tiles_ground_extra_bottom(play, y, x);
    play_set_tiles_ground_extra_left(play, y, x);
    play_set_tiles_ground_extra_right(play, y, x);
    if (play->ground_int_array[y][x] == 1362)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 3*32, 32, 32});
    if (play->ground_int_array[y][x] == 1682)
        set_rect(play->ground_sprite[y][x], (sfIntRect){17*32, 12*32, 32, 32});
    if (play->ground_int_array[y][x] == 1841)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 17*32, 32, 32});
    if (play->ground_int_array[y][x] == 1715)
        set_rect(play->ground_sprite[y][x], (sfIntRect){16*32, 16*32, 32, 32});
    if (play->ground_int_array[y][x] == 1811)
        set_rect(play->ground_sprite[y][x], (sfIntRect){18*32, 16*32, 32, 32});
}

void play_set_ground_tiles(play_s *play, int y, int x)
{
    play_set_ground_tile_ventilation(play, y, x);
    play_set_ground_tile_laundry_top(play, y, x);
    play_set_ground_tile_laundry_bottom(play, y, x);
    play_init_tile_library_top(play, y, x);
    play_init_tile_library_bottom(play, y, x);
    play_init_tiles_shower_top(play, y, x);
    play_init_tiles_shower_bottom(play, y, x);
    play_set_ground_tile_kitchen_top(play, y, x);
    play_set_ground_tile_kitchen_middle(play, y, x);
    play_set_ground_tile_kitchen_bottom(play, y, x);
    play_set_tiles_ground_extra(play, y, x);
    play_set_tiles_outside(play, y, x);
}

int play_init_ground_sprite(play_s *play)
{
    play->ground_tileset = sfTexture_createFromFile\
    ("assets/sprite/ground_texture.png", NULL);
    play->ground_sprite = malloc(sizeof(sfSprite**) * (play->map_height + 1));

    for (int y = 0; y < play->map_height; y++) {
        play->ground_sprite[y] = malloc(sizeof(sfSprite*) * \
        (play->map_width + 1));
        for (int x = 0; x < play->map_width; x++) {
            play->ground_sprite[y][x] = sfSprite_create();
            sfSprite_setPosition(play->ground_sprite[y][x], \
            (sfVector2f){x * 32, y * 32});
            sfSprite_setTexture(play->ground_sprite[y][x], \
            play->ground_tileset, sfTrue);
            set_rect(play->ground_sprite[y][x], (sfIntRect){0, 0, 0, 0});
            play_set_ground_tiles(play, y, x);
        }
        play->ground_sprite[y][play->map_width] = NULL;
    }
    play->ground_sprite[play->map_height] = NULL;
    return (0);
}

int play_init_ground_buffer(play_s *play)
{
    int fd = 0;
    int file_size = 0;

    if ((fd = open("assets/maps/ground.map", O_RDONLY)) == -1)
        return (-1);
    file_size = get_file_size("assets/maps/ground.map");
    play->ground_buffer = malloc(sizeof(char) * (file_size + 1));
    if (play->ground_buffer == NULL)
        return (-1);
    play->ground_buffer[file_size] = '\0';
    if (read(fd, play->ground_buffer, file_size) == -1)
        return (-1);
    play->ground_int_array = malloc(sizeof(int*) * play->map_height);
    for (int y = 0; y < play->map_height; y++)
        play->ground_int_array[y] = malloc(sizeof(int) * play->map_width);
    play->ground_int_array = my_json_parser(play->ground_int_array, \
    play->ground_buffer, play->map_width);
    return (0);
}

int play_init_ground(play_s *play)
{
    play->ground_buffer = NULL;
    play->ground_sprite = NULL;
    play->ground_tileset = NULL;
    play->ground_int_array = NULL;
    play->map_height = 98;
    play->map_width = 143;

    if (play_init_ground_buffer(play) == -1)
        return (-1);
    if (play_init_ground_sprite(play) == -1)
        return (-1);
    return (0);
}
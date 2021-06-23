/*
** EPITECH PROJECT, 2021
** play_init_map.c
** File description:
** functions to initialize map
*/

#include "my.h"

void play_set_walls_tiles_concrete(play_s *play, int y, int x)
{
    play_set_tiles_top(play, y, x);
    play_set_tiles_middle(play, y, x);
    play_set_tiles_bottom(play, y, x);
}

void play_set_walls_tiles(play_s *play, int y, int x)
{
    play_set_walls_tiles_concrete(play, y, x);
    play_set_walls_tiles_cell_furniture(play, y, x);
    play_set_walls_tiles_cell_kitchen(play, y, x);
    play_set_walls_tiles_cell_laundry(play, y, x);
    play_set_walls_tiles_cell_library(play, y, x);
    play_set_walls_tiles_cell_showers(play, y, x);
    play_set_walls_tiles_cell_entrance(play, y, x);

    if (play->walls_int_array[y][x] == 531)
        set_rect(play->walls_sprite[y][x], (sfIntRect){18*32, 16*32, 32, 32});
}

int play_init_walls_sprite(play_s *play)
{
    play->walls_tileset = sfTexture_createFromFile(\
    "assets/sprite/low_wall_texture.png", NULL);
    play->walls_sprite = malloc(sizeof(sfSprite**) * (play->map_height + 1));

    for (int y = 0; y < play->map_height; y++) {
        play->walls_sprite[y] = malloc(sizeof(sfSprite*) * \
        (play->map_width + 1));
        for (int x = 0; x < play->map_width; x++) {
            play->walls_sprite[y][x] = sfSprite_create();
            sfSprite_setPosition(play->walls_sprite[y][x], \
            (sfVector2f){x * 32, y * 32});
            sfSprite_setTexture(play->walls_sprite[y][x], \
            play->walls_tileset, sfTrue);
            set_rect(play->walls_sprite[y][x], (sfIntRect){0, 0, 0, 0});
            play_set_walls_tiles(play, y, x);
        }
        play->walls_sprite[y][play->map_width] = NULL;
    }
    play->walls_sprite[play->map_height] = NULL;
    return (0);
}

int play_init_walls_buffer(play_s *play)
{
    int fd = 0;
    int file_size = 0;

    if ((fd = open("assets/maps/walls.map", O_RDONLY)) == -1)
        return (-1);
    file_size = get_file_size("assets/maps/walls.map");
    play->walls_buffer = malloc(sizeof(char) * (file_size + 1));
    if (play->walls_buffer == NULL)
        return (-1);
    play->walls_buffer[file_size] = '\0';
    if (read(fd, play->walls_buffer, file_size) == -1)
        return (-1);
    play->walls_int_array = malloc(sizeof(int*) * play->map_height);
    for (int y = 0; y < play->map_height; y++)
        play->walls_int_array[y] = malloc(sizeof(int) * play->map_width);
    play->walls_int_array = my_json_parser(play->walls_int_array, \
    play->walls_buffer, play->map_width);
    return (0);
}

int play_init_walls(play_s *play)
{
    play->walls_buffer = NULL;
    play->walls_sprite = NULL;
    play->walls_tileset = NULL;
    play->walls_int_array = NULL;
    play->map_height = 98;
    play->map_width = 143;

    if (play_init_walls_buffer(play) == -1)
        return (-1);
    if (play_init_walls_sprite(play) == -1)
        return (-1);
    return (0);
}
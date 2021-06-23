/*
** EPITECH PROJECT, 2021
** play_init_collision.c
** File description:
** functions to initialize collisions for player
*/

#include "my.h"

int play_init_collision_buffer(play_s *play)
{
    int fd = 0;
    int file_size = 0;
    int i = 0;

    if ((fd = open("assets/maps/collision.map", O_RDONLY)) == -1)
        return (-1);
    file_size = get_file_size("assets/maps/collision.map");
    play->collision_buffer = malloc(sizeof(char) * (file_size + 1));
    if (play->collision_buffer == NULL)
        return (-1);
    play->collision_buffer[file_size] = '\0';
    if (read(fd, play->collision_buffer, file_size) == -1)
        return (-1);

    for (i = 0; play->collision_buffer[i] != '\0'; i++) {
        if (play->collision_buffer[i] == '\n')
            play->map_height++;
    }
    play->map_width = i / play->map_height;
    return (0);
}

int play_init_collision(play_s *play)
{
    play->collision_array = NULL;
    play->collision_buffer = NULL;

    if (play_init_collision_buffer(play) == -1)
        return (-1);
    play->collision_array = my_str_to_word_array(play->collision_buffer);
    if (play->collision_array == NULL)
        return (-1);
    return (0);
}
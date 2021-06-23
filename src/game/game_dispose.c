/*
** EPITECH PROJECT, 2021
** game_dispose.c
** File description:
** function to free and destroy everything from game
*/

#include "my.h"

void game_dispose(game_s *game)
{
    sfRenderWindow_destroy(game->window);
    sfMusic_destroy(game->music);
    free(game);
}
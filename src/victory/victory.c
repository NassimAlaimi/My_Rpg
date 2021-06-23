/*
** EPITECH PROJECT, 2021
** victory.c
** File description:
** main function for victory scene
*/

#include "my.h"

int victory(game_s *game)
{
    victory_s *victory = NULL;

    victory = victory_init(game, victory);
    if (victory == NULL)
        return (-1);

    while (sfRenderWindow_isOpen(game->window) && game->scene == 4) {
        sfRenderWindow_clear(game->window, sfBlack);
        victory_checks(game, victory);
        victory_draw(game, victory);
        sfRenderWindow_display(game->window);
    }
    victory_dispose(victory);
    return (0);
}
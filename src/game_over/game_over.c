/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** game_over
*/

#include "my.h"

int game_over(game_s *game)
{
    game_over_s *game_over = NULL;
    game_over = game_over_init(game_over, game);

    while (sfRenderWindow_isOpen(game->window) && game->scene == 5) {
        sfRenderWindow_clear(game->window, sfBlack);
        game_over_checks(game, game_over);
        game_over_draw(game, game_over);
        sfRenderWindow_display(game->window);
    }
    return (0);
}
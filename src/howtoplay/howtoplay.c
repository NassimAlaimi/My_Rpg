/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** howtoplay
*/

#include "my.h"

int howtoplay(game_s *game)
{
    howtoplay_s *howtoplay = NULL;

    howtoplay = howtoplay_init(howtoplay);
    if (howtoplay == NULL)
        return (-1);

    while (sfRenderWindow_isOpen(game->window) && game->scene == 3) {
        sfRenderWindow_clear(game->window, sfBlack);

        howtoplay_checks(game, howtoplay);
        howtoplay_draw(game, howtoplay);

        sfRenderWindow_display(game->window);
    }
    return (0);
}
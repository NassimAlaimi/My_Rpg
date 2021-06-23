/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** settings
*/

#include "my.h"

int settings(game_s *game)
{
    settings_s *settings = NULL;

    settings = settings_init(settings, game);
    if (settings == NULL)
        return (-1);

    while (sfRenderWindow_isOpen(game->window) && game->scene == 2) {
        sfRenderWindow_clear(game->window, sfBlack);

        settings_checks(game, settings);
        settings_draw(game, settings);

        sfRenderWindow_display(game->window);
    }
    return (0);
}
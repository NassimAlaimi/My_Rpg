/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** game_over_draw
*/

#include "my.h"

void game_over_draw(game_s *game, game_over_s *game_over)
{
    sfRenderWindow_drawSprite(game->window, \
    game_over->quit_button_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    game_over->mainmenu_button_sprite, NULL);
    sfRenderWindow_drawText(game->window, game_over->title, NULL);
}
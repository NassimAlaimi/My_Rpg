/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** howtoplay_draw
*/

#include "my.h"

void howtoplay_draw(game_s *game, howtoplay_s *howtoplay)
{
    sfRenderWindow_drawSprite(game->window, howtoplay->bg_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, howtoplay->htp_logo_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, howtoplay->back_arrow_sprite, NULL);
}
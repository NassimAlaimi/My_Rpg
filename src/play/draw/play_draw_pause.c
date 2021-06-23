/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_draw_pause
*/

#include "my.h"

void play_draw_pause(game_s *game, play_s *play)
{
    if (play->pause) {
        sfRenderWindow_drawRectangleShape(game->window, play->pause_bg, NULL);
        sfRenderWindow_drawSprite(game->window, play->pause_logo_sprite, NULL);
        sfRenderWindow_drawSprite(game->window, \
        play->pause_resume_sprite, NULL);
        sfRenderWindow_drawSprite(game->window, \
        play->pause_mainmenu_sprite, NULL);
        sfRenderWindow_drawSprite(game->window, play->pause_quit_sprite, NULL);
    }
}
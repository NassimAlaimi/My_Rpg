/*
** EPITECH PROJECT, 2021
** menu_draw.c
** File description:
** functions to draw sprites in menu
*/

#include "my.h"


void menu_draw_move_bg(menu_s *menu)
{
    menu->bg_time = sfClock_getElapsedTime(menu->bg_clock);
    menu->elaspedtime = sfTime_asMilliseconds(menu->bg_time);

    if (menu->elaspedtime > 5) {
        sfSprite_move(menu->bg_sprite, (sfVector2f){-0.3, -0.3});
        sfClock_restart(menu->bg_clock);
    }
}

void menu_draw(game_s *game, menu_s *menu)
{
    menu_draw_move_bg(menu);
    sfRenderWindow_drawSprite(game->window, menu->bg_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->logo_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->playbutton_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->htpbutton_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->settingsbutton_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->quitbutton_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->arrow_sprite, NULL);
}
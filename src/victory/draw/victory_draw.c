/*
** EPITECH PROJECT, 2021
** victory_draw.c
** File description:
** function to draw in victory scene
*/

#include "my.h"

void victory_draw(game_s *game, victory_s *victory)
{
    for (int x = 0; victory->particles[x] != NULL; x++) {
        sfRectangleShape_move(victory->particles[x], victory->velocities[x]);
        sfRenderWindow_drawRectangleShape(game->window, \
        victory->particles[x], NULL);
    }
    sfRenderWindow_drawText(game->window, victory->title, NULL);
    sfRenderWindow_drawSprite(game->window, \
    victory->quit_button_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    victory->mainmenu_button_sprite, NULL);
}
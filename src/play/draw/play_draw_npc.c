/*
** EPITECH PROJECT, 2021
** play draw npc
** File description:
** draws npcs on the map
*/

#include "my.h"

void play_draw_npc(game_s *game, play_s *play)
{
    sfRenderWindow_drawSprite(game->window, play->npcs[0].spr, NULL);
    sfRenderWindow_drawSprite(game->window, play->npcs[1].spr, NULL);
}
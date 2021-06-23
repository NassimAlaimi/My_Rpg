/*
** EPITECH PROJECT, 2021
** play_draw.c
** File description:
** functions to draw sprites in play
*/

#include "my.h"

void play_draw(game_s *game, play_s *play)
{
    play_draw_ground(game, play);
    play_draw_towers(game, play);
    play_draw_npc(game, play);
    play_draw_walls(game, play);
    play_draw_inventory(game, play);
    play_draw_text(game, play);
    play_draw_box(game, play->box, play);
    play_draw_inventory(game, play);
    play_draw_pause(game, play);
}
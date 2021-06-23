/*
** EPITECH PROJECT, 2021
** npc dispose
** File description:
** disposes npc
*/

#include "my.h"

void npc_dispose(play_s *play)
{
    sfSprite_destroy(play->npcs[0].spr);
    sfSprite_destroy(play->npcs[0].spr_txt);
    sfTexture_destroy(play->npcs[0].texture);
    sfTexture_destroy(play->npcs[0].texture_txt);
    sfSprite_destroy(play->npcs[1].spr);
    sfTexture_destroy(play->npcs[1].texture);
    free(play->npcs);
}
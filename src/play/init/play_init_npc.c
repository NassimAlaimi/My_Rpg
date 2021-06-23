/*
** EPITECH PROJECT, 2021
** play init npc
** File description:
** play_init_npc
*/

#include "my.h"

void init_npc_jailer(play_s *play)
{
    play->npcs[0].spr = sfSprite_create();
    play->npcs[0].spr_txt = sfSprite_create();
    play->npcs[0].texture = \
    sfTexture_createFromFile("assets/sprite/npc_jail.png", NULL);
    play->npcs[0].texture_txt = \
    sfTexture_createFromFile("assets/sprite/npc_jail_txt.png", NULL);
    sfSprite_setTexture(play->npcs[0].spr, play->npcs[0].texture, sfTrue);
    sfSprite_setTexture(play->npcs[0].spr_txt, \
    play->npcs[0].texture_txt, sfTrue);
    sfSprite_setPosition(play->npcs[0].spr, (sfVector2f){1150, 695});
    sfSprite_setPosition(play->npcs[0].spr_txt, (sfVector2f){1065, 630});
    sfSprite_setScale(play->npcs[0].spr, (sfVector2f){0.1, 0.1});
    sfSprite_setScale(play->npcs[0].spr_txt, (sfVector2f){0.4, 0.4});
}

void init_npc_guard(play_s *play)
{
    play->npcs[1].spr = sfSprite_create();
    play->npcs[1].spr_txt = sfSprite_create();
    play->npcs[1].texture = \
    sfTexture_createFromFile("assets/sprite/cop_idle.png", NULL);
    play->npcs[1].texture_txt = \
    sfTexture_createFromFile("assets/sprite/cop_txt.png", NULL);
    sfSprite_setTexture(play->npcs[1].spr, play->npcs[1].texture, sfTrue);
    sfSprite_setTexture(play->npcs[1].spr_txt, \
    play->npcs[1].texture_txt, sfTrue);
    sfSprite_setPosition(play->npcs[1].spr, (sfVector2f){1605, 2148});
    sfSprite_setPosition(play->npcs[1].spr_txt, (sfVector2f){1530, 2100});
    sfSprite_setScale(play->npcs[1].spr_txt, (sfVector2f){0.4, 0.4});

    play->npcs[1].stats = malloc(sizeof(*play->npcs[1].stats));
    play->npcs[1].stats->hp = 30;
    play->npcs[1].stats->exp = 0;
    play->npcs[1].stats->atk = 8;
    play->npcs[1].stats->def = 2;
    play->npcs[1].stats->max_hp = 30;
    play->npcs[1].stats->crit_chance = 10;
    play->npcs[1].stats->dodge_chance = 5;
    play->npcs[1].stats->level = 0;
}

void play_init_npc(play_s *play)
{
    play->npcs = malloc(sizeof(npc_s) * 2);
    init_npc_jailer(play);
    init_npc_guard(play);
}
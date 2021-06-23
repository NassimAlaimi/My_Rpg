/*
** EPITECH PROJECT, 2021
** basic attack
** File description:
** handles the basic attack with hanimation and damage
*/

#include "my.h"

void basic_attack(combat_s *combat)
{
    int dmg_dealt = combat->player->stats->atk;

    if (rand() % 100 < combat->player->stats->crit_chance)
        dmg_dealt *= 1.5;
    dmg_dealt -= combat->opponent->stats->def;
    if (dmg_dealt < 0)
        dmg_dealt = 0;
    if (rand() % 100 < combat->opponent->stats->dodge_chance && \
        dmg_dealt > 0)
        dmg_dealt = 0;
    combat->opponent->stats->hp -= dmg_dealt;
    if (combat->opponent->stats->hp < 0)
        combat->opponent->stats->hp = 0;
}
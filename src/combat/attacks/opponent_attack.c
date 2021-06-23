/*
** EPITECH PROJECT, 2021
** opponent attack
** File description:
** handles opponents basic attack
*/

#include "my.h"

void opponent_basic_attack(combat_s *combat, sfBool *player_turn)
{
    int dmg_dealt = combat->opponent->stats->atk;

    if (rand() % 100 < combat->opponent->stats->crit_chance)
        dmg_dealt *= 1.5;
    dmg_dealt -= combat->player->stats->def;
    if (dmg_dealt < 0)
        dmg_dealt = 0;
    if (rand() % 100 < combat->player->stats->dodge_chance && \
        dmg_dealt > 0)
        dmg_dealt = 0;
    combat->player->stats->hp -= dmg_dealt;
    if (combat->player->stats->hp < 0)
        combat->player->stats->hp = 0;
    (*player_turn) = !(*player_turn);
}

void opponent_attack(combat_s *combat, sfBool *player_turn)
{
    if (combat->opponent->stats->hp > 0)
        opponent_basic_attack(combat, player_turn);
}
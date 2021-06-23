/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** player_init
*/

#include "my.h"

void play_init_player_variable(player_s *player)
{
    player->direction = 0;
    player->max_down = 16;
    player->max_up = 16;
    player->max_l_r = 7;
    player->status = 0;
    player->sprite_status = 17;
}

player_s *init_player(player_s *player)
{
    player = malloc(sizeof(*player));
    if (player == NULL)
        return (NULL);
    play_init_player_variable(player);
    play_init_player(player);
    return (player);
}
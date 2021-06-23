/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_draw_player
*/

#include "my.h"

void play_draw_player_direction_2_3(player_s *player)
{
    if (player->status == 0) {
        if (player->sprite_status == 17)
            player->sprite_status = 18;
        else
            player->sprite_status = 17;
    } else if (player->status == 1) {
        if (player->sprite_status < 7)
            player->sprite_status++;
        else
            player->sprite_status = 0;
    }
}

void play_draw_player_direction_0_1(player_s *player)
{
    if (player->status == 0) {
        if (player->sprite_status == 17)
            player->sprite_status = 18;
        else
            player->sprite_status = 17;
    } else if (player->status == 1) {
        if (player->sprite_status < 17)
            player->sprite_status++;
        else
            player->sprite_status = 0;
    }
}

void play_draw_player(player_s *player)
{
    if (player->direction == 0 || player->direction == 1) {
        play_draw_player_direction_0_1(player);
    } else if (player->direction == 2 || player->direction == 3) {
        play_draw_player_direction_2_3(player);
    }
    sfSprite_setTextureRect(player->player_sprite, (sfIntRect){27 * player\
->sprite_status, 35 * player->direction, 27, 35});
}
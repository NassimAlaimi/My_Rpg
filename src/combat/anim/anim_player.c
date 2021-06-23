/*
** EPITECH PROJECT, 2021
** anim player
** File description:
** handles player animations
*/

#include "my.h"

void anim_player_charge(game_s *game, combat_s *combat, sfSprite *player_spr, \
sfClock *clock)
{
    while (sfSprite_getPosition(player_spr).x < 900) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 2) {
            sfSprite_move(player_spr, (sfVector2f){4, 0});
            combat_draw(game->window, combat);
            sfRenderWindow_display(game->window);
        }
    }
}

void anim_player_back(game_s *game, combat_s *combat, sfSprite *player_spr, \
sfClock *clock)
{
    update_hp_bar(combat->opponent);
    while (sfSprite_getPosition(player_spr).x > 600) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 4) {
            sfSprite_move(player_spr, (sfVector2f){-4, 0});
            combat_draw(game->window, combat);
            sfRenderWindow_display(game->window);
        }
    }
}
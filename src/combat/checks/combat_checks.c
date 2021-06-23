/*
** EPITECH PROJECT, 2021
** combat checks
** File description:
** handles events and checks from combat scene
*/

#include "my.h"

void player_press_one(game_s *game, combat_s *combat, sfBool *player_turn, \
sfClock *clock)
{
    if (game->event.type == sfEvtKeyReleased && \
    game->event.key.code == sfKeyNum1 && (*player_turn) == sfTrue) {
        anim_player_charge(game, combat, combat->player->spr_combtnt, clock);
        basic_attack(combat);
        anim_player_back(game, combat, combat->player->spr_combtnt, clock);
        (*player_turn) = !(*player_turn);
    }
}

void player_press_two(game_s *game, combat_s *combat, sfBool *player_turn)
{
    if (game->event.type == sfEvtKeyReleased && \
    game->event.key.code == sfKeyNum2) {
        combat->player->status = 2;
        combat->player->stats->def *= 2;
        (*player_turn) = !(*player_turn);
    }
}

void player_press_three(game_s *game, combat_s *combat, sfBool *player_turn, \
sfClock *clock)
{
    if (game->event.type == sfEvtKeyReleased && \
    game->event.key.code == sfKeyNum3&& (*player_turn) == sfTrue) {
        (*player_turn) = !(*player_turn);
        anim_player_charge(game, combat, combat->player->spr_combtnt, clock);
        anim_player_back(game, combat, combat->player->spr_combtnt, clock);
    }
}

void combat_checks(game_s *game, combat_s *combat, sfBool *player_turn, \
sfClock *clock)
{
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        player_press_one(game, combat, player_turn, clock);
        player_press_two(game, combat, player_turn);
        player_press_three(game, combat, player_turn, clock);
    }
}

void player_combat_turn(game_s *game, combat_s *combat, sfBool *player_turn, \
sfClock *clock)
{
    if (combat->player->status == 2) {
        combat->player->status = 0;
        combat->player->stats->def = combat->player->stats->def / 2;
    }
    combat_checks(game, combat, player_turn, clock);
}
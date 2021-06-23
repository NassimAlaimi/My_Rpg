/*
** EPITECH PROJECT, 2021
** combat
** File description:
** handles the combat scene and interactions
*/

#include "my.h"

void update_hp_bar(combattant_s *combattant)
{
    float new_hp_len = combattant->stats->hp * 100 / \
    combattant->stats->max_hp;

    sfRectangleShape_setSize(combattant->hp_bar->fill_bar, \
    (sfVector2f){new_hp_len, 20});
}

void update_stats(combat_s *combat)
{
    sfText_setString(combat->player->txt.hp, \
    my_int_to_str(combat->player->stats->hp));
    sfText_setString(combat->opponent->txt.hp, \
    my_int_to_str(combat->opponent->stats->hp));
    sfText_setString(combat->player->txt.def, \
    my_int_to_str(combat->player->stats->def));
    sfText_setString(combat->opponent->txt.def, \
    my_int_to_str(combat->opponent->stats->def));
}

void combat_loop(game_s *game, combat_s *combat)
{
    sfClock *clock = sfClock_create();
    sfBool player_turn = sfTrue;

    while (combat->player->stats->hp > 0 && combat->opponent->stats->hp > 0) {
        sfRenderWindow_clear(game->window, sfWhite);
        if (player_turn == sfTrue)
            player_combat_turn(game, combat, &player_turn, clock);
        else
            opponent_attack(combat, &player_turn);
        update_hp_bar(combat->player);
        update_stats(combat);
        combat_draw(game->window, combat);
        sfRenderWindow_display(game->window);
    }
}

void combat_scene(game_s *game, stats_s *player_stats, stats_s *enemy_stats)
{
    combat_s *combat = malloc(sizeof(*combat));

    combat_init(combat, player_stats, enemy_stats);
    combat_loop(game, combat);
    if (player_stats->hp <= 0)
        game->scene = 5;
    else
        game->scene = 4;
}
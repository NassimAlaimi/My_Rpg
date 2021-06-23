/*
** EPITECH PROJECT, 2021
** play_checks.c
** File description:
** function to check for inputs in play
*/

#include "my.h"

void play_checks(game_s *game, play_s *play)
{
    sfFloatRect trigger = sfRectangleShape_getGlobalBounds(play->aggro_area);
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);

    if (sfFloatRect_contains(&trigger, pos.x, pos.y)) {
        sfView_setSize(play->view, (sfVector2f){1920, 1080});
        sfView_setCenter(play->view, (sfVector2f){1920 / 2, 1080 / 2});
        sfRenderWindow_setView(game->window, play->view);
        combat_scene(game, play->inventory->stats, play->npcs[1].stats);
    }
    play_check_box(play, play->box);
    if (!play->box->box)
        play_check_player_movement(game, play);
    play_check_item_selcted(play);
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
    }
}
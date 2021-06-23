/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_draw_objet
*/

#include "my.h"

void play_draw_pck(game_s *game, play_s *play, int i, int y)
{
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);

    if (play->box->obj_box[play->box->box_open][i] == 1 && i <= 5) {
        sfSprite_setPosition(play->box->pickaxe_sprite, (sfVector2f){pos.x-215 \
            + (75 * i), pos.y - 65});
        sfRenderWindow_drawSprite(game->window, play->box->pickaxe_sprite, \
        NULL);
    }
    if (play->box->obj_box[play->box->box_open][i] == 1 && i > 5) {
        sfSprite_setPosition(play->box->pickaxe_sprite, (sfVector2f){pos.x-215 \
            + (75 * y), pos.y - 65 + 75});
        sfRenderWindow_drawSprite(game->window, play->box->pickaxe_sprite, \
        NULL);
    }
}

void play_draw_screw(game_s *game, play_s *play, int i, int y)
{
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);

    if (play->box->obj_box[play->box->box_open][i] == 2 && i <= 5) {
        sfSprite_setPosition(play->box->screwdriver_sprite, (sfVector2f){pos.x-\
            215 + (75 * i), pos.y - 65});
        sfRenderWindow_drawSprite(game->window, play->box->screwdriver_sprite, \
        NULL);
    }
    if (play->box->obj_box[play->box->box_open][i] == 2 && i > 5) {
        sfSprite_setPosition(play->box->screwdriver_sprite, (sfVector2f){pos.x-\
            215 + (75 * y), pos.y - 65 + 75});
        sfRenderWindow_drawSprite(game->window, play->box->screwdriver_sprite, \
        NULL);
    }
}
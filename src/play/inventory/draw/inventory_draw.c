/*
** EPITECH PROJECT, 2021
** draw inventory
** File description:
** draws inventory with items and stats
*/

#include "my.h"

void inventory_draw_objs(game_s *game, play_s *play, obj_s *objs)
{
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);

    for (int i = 0; i < 5; i++) {
        if (objs[i].id == 1) {
            sfSprite_setPosition(play->box->pickaxe_sprite, (sfVector2f)\
            {pos.x - 488 + i * 65, pos.y - 272});
            sfRenderWindow_drawSprite(game->window, play->box->pickaxe_sprite\
            , NULL);
        }
        if (objs[i].id == 2) {
            sfSprite_setPosition(play->box->screwdriver_sprite, (sfVector2f)\
            {pos.x - 488 + i * 65, pos.y - 272});
            sfRenderWindow_drawSprite(game->window, \
            play->box->screwdriver_sprite, NULL);
        }
    }
}

void play_draw_inventory(game_s *game, play_s *play)
{
    sfRenderWindow_drawSprite(game->window, play->inventory->inv_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, play->inventory->selected_sprite, \
    NULL);
    inventory_draw_objs(game, play, play->inventory->obj);
}
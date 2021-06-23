/*
** EPITECH PROJECT, 2021
** update inventory
** File description:
** updates the inventory
*/

#include "my.h"

void update_inventory_pos(game_s *game, play_s *play)
{
    float selected_offset = sfSprite_getPosition(play->\
    inventory->selected_sprite).x - play->inventory->inv_pos.x;
    sfVector2f view_size = sfView_getSize(play->view);
    sfVector2f center = sfView_getCenter(play->view);

    play->inventory->inv_pos.x = center.x - view_size.x / 2;
    play->inventory->inv_pos.y = center.y - view_size.y / 2;

    sfSprite_setPosition(play->inventory->inv_sprite, play->inventory->inv_pos);
    sfSprite_setPosition(play->inventory->selected_sprite, (sfVector2f) \
    {play->inventory->inv_pos.x + selected_offset, play->inventory->inv_pos.y});
    sfRenderWindow_drawSprite(game->window, play->inventory->inv_sprite, NULL);
}

void update_inventory(game_s *game, play_s *play)
{
    update_inventory_pos(game, play);
}
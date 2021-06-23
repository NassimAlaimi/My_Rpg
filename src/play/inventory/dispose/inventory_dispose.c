/*
** EPITECH PROJECT, 2021
** dispose inventory
** File description:
** frees and destroys inventory structure
*/

#include "my.h"

void inventory_dispose(inventory_s *inventory)
{
    free(inventory->stats);
    sfSprite_destroy(inventory->inv_sprite);
    sfTexture_destroy(inventory->inv_texture);
    sfSprite_destroy(inventory->selected_sprite);
    sfTexture_destroy(inventory->selected_texture);
    free(inventory->obj_pos);
}
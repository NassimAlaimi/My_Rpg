/*
** EPITECH PROJECT, 2021
** combat dispose
** File description:
** dispose from combat struct and scene
*/

#include "my.h"

void dispose_combattant(combattant_s *combattant)
{
    sfRectangleShape_destroy(combattant->hp_bar->bg_bar);
    sfRectangleShape_destroy(combattant->hp_bar->fill_bar);
    sfSprite_destroy(combattant->spr_combtnt);
    sfTexture_destroy(combattant->texture_combtnt);
    sfSprite_destroy(combattant->spr_stats);
    sfTexture_destroy(combattant->texture_stats);
    free(combattant->stats);
}

void dispose_combat(combat_s *combat)
{
    dispose_combattant(combat->player);
    dispose_combattant(combat->opponent);
    sfSprite_destroy(combat->bg_sprite);
    sfTexture_destroy(combat->bg_texture);
    free(combat);
}
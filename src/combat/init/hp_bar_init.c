/*
** EPITECH PROJECT, 2021
** init hp bar
** File description:
** initializes a health points bar for a combattant
*/

#include "my.h"

void init_hp_bar(combattant_s *combattant)
{
    sfVector2f hp_bar_pos = combattant->pos;

    combattant->hp_bar->bg_bar = sfRectangleShape_create();
    sfRectangleShape_setSize(combattant->hp_bar->bg_bar, (sfVector2f){110, 28});
    sfRectangleShape_setFillColor(combattant->hp_bar->bg_bar, sfBlack);
    sfRectangleShape_setPosition(combattant->hp_bar->bg_bar, \
    (sfVector2f){hp_bar_pos.x, hp_bar_pos.y - 70});

    combattant->hp_bar->fill_bar = sfRectangleShape_create();
    sfRectangleShape_setSize(combattant->hp_bar->fill_bar, \
    (sfVector2f){100, 20});
    sfRectangleShape_setFillColor(combattant->hp_bar->fill_bar, sfRed);
    sfRectangleShape_setPosition(combattant->hp_bar->fill_bar, \
    (sfVector2f){hp_bar_pos.x + 5, hp_bar_pos.y - 66});
}
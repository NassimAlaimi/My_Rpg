/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_init_box
*/

#include "my.h"

void play_init_box_array(box_s *box)
{
    int tmp = 20;
    box->obj_box = malloc(sizeof(int*) * tmp);
    for (int i = 0; i <= tmp; i++) {
        box->obj_box[i] = malloc(sizeof(int)*12);
        for (int x = 0; x < 12; x++)
            box->obj_box[i][x] = 0;
    }
}

void play_init_box(box_s *box)
{
    box->box_sprite = sfSprite_create();
    box->box_texture = sfTexture_createFromFile("assets/sprite/box_inventory.\
png", NULL);
    sfSprite_setTexture(box->box_sprite, box->box_texture, sfTrue);
    sfSprite_setScale(box->box_sprite, (sfVector2f){0.6, 0.6});
    box->box = false;
    box->box_clock = sfClock_create();
    box->box_ms = 0;
}

box_s *init_box(box_s *box)
{
    box = malloc(sizeof(*box));
    if (box == NULL)
        return (NULL);
    play_init_box(box);
    play_init_box_array(box);
    play_init_pickaxe(box);
    play_init_screwdriver(box);
    return (box);
}
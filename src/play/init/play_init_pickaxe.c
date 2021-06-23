/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_init_pickaxe
*/

#include "my.h"

void play_init_screwdriver(box_s *box)
{
    srand(time(NULL));
    int x = rand()%9+1;
    int y = rand()%15+1;

    box->screwdriver_sprite = sfSprite_create();
    box->screwdriver_texture = sfTexture_createFromFile("assets/sprite/screw\
driver.png", NULL);
    sfSprite_setTexture(box->screwdriver_sprite, box->screwdriver_texture, \
sfTrue);
    sfSprite_setScale(box->screwdriver_sprite, (sfVector2f){1.95, 1.95});
    box->obj_box[y][x] = 2;
}

void play_init_pickaxe(box_s *box)
{
    int x = rand()%9+1;
    int y = rand()%15+1;

    box->pickaxe_sprite = sfSprite_create();
    box->pickaxe_texture = sfTexture_createFromFile("assets/sprite/pioche.png"\
, NULL);
    sfSprite_setTexture(box->pickaxe_sprite, box->pickaxe_texture, sfTrue);
    sfSprite_setScale(box->pickaxe_sprite, (sfVector2f){1, 1});
    box->obj_box[y][x] = 1;
}
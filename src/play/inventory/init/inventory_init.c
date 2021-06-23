/*
** EPITECH PROJECT, 2021
** init inventory
** File description:
** initializes the plaeyr's inventory
*/

#include "my.h"

void inventory_init_obj(play_s *play)
{
    play->inventory->obj[0].id = 0;
    play->inventory->obj[1].id = 0;
    play->inventory->obj[2].id = 0;
    play->inventory->obj[3].id = 0;
    play->inventory->obj[4].id = 0;
}

void inventory_init_objs_place(play_s *play)
{
    play->inventory->curr_obj = 0;
    play->inventory->obj = malloc(sizeof(obj_s) * 5);
    play->inventory->obj[0].name = NULL;
    play->inventory->obj[1].name = NULL;
    play->inventory->obj_pos = malloc(sizeof(sfVector2f) * 5);
    play->inventory->obj_pos[0] = (sfVector2f){10, 15};
    play->inventory->obj_pos[1] = (sfVector2f){100, 15};
    play->inventory->obj_pos[2] = (sfVector2f){190, 15};
    play->inventory->obj_pos[3] = (sfVector2f){280, 15};
    play->inventory->obj_pos[4] = (sfVector2f){370, 15};
}

void inventory_init_stat(inventory_s *inventory)
{
    inventory->stats = malloc(sizeof(*inventory->stats));
    inventory->stats->hp = 30;
    inventory->stats->exp = 0;
    inventory->stats->atk = 8;
    inventory->stats->def = 2;
    inventory->stats->max_hp = 30;
    inventory->stats->crit_chance = 10;
    inventory->stats->dodge_chance = 5;
    inventory->stats->level = 0;
}

void inventory_init_layout(play_s *play)
{
    sfVector2f inv_pos = \
    {1500 - (play->view_size.x / 2), 1000 - (play->view_size.y / 2)};
    play->inventory->inv_pos = inv_pos;
    play->inventory->inv_sprite = sfSprite_create();
    play->inventory->selected_sprite = sfSprite_create();
    play->inventory->inv_texture = sfTexture_createFromFile(\
    "assets/sprite/inventory.png", NULL);
    play->inventory->selected_texture = sfTexture_createFromFile(\
    "assets/sprite/curr_item.png", NULL);
}

void inventory_init_layin(play_s *play)
{
    sfSprite_setTexture(play->inventory->inv_sprite, \
    play->inventory->inv_texture, sfTrue);
    sfSprite_setTexture(play->inventory->selected_sprite, \
    play->inventory->selected_texture, sfTrue);
    sfSprite_setPosition(play->inventory->inv_sprite, play->inventory->inv_pos);
    sfSprite_setPosition(play->inventory->selected_sprite, \
    play->inventory->inv_pos);
    sfSprite_setScale(play->inventory->inv_sprite, (sfVector2f){0.45, 0.51});
}

void play_init_inventory(play_s *play)
{
    play->inventory = malloc(sizeof(*play->inventory));

    play->pause = false;
    play->player->speed = 2;
    inventory_init_objs_place(play);
    inventory_init_layout(play);
    inventory_init_layin(play);
    inventory_init_stat(play->inventory);
    inventory_init_obj(play);
}
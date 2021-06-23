/*
** EPITECH PROJECT, 2021
** init combattant
** File description:
** initializes a combattant
*/

#include "my.h"

sfText *set_fight_name(sfText *text_name, char *name, sfVector2f pos)
{
    text_name = sfText_create();
    sfText_setFont(text_name, \
    sfFont_createFromFile("assets/font/mariokart.ttf"));
    sfText_setString(text_name, name);
    sfText_setCharacterSize(text_name, 25);
    sfText_setFillColor(text_name, sfWhite);
    sfText_setOutlineColor(text_name, sfBlack);
    sfText_setOutlineThickness(text_name, 2);
    sfText_setPosition(text_name, (sfVector2f){pos.x, pos.y - 105});
    return (text_name);
}

void set_combattant_variables(combattant_s *fight, char *name)
{
    fight->name = set_fight_name(fight->name, name, \
    fight->pos);

    if (fight->pos.x == 600) {
        init_stats_board(fight, (sfVector2f){fight->pos.x - 200, fight->pos.y});
    } else
        init_stats_board(fight, fight->pos);
    init_hp_bar(fight);
}

void init_combattant(combattant_s *combattant, stats_s *stats, \
char *filepath, char *name)
{
    sfIntRect rect;

    rect.height = 34;
    rect.left = 0;
    rect.top = 0;
    rect.width = 26;

    combattant->hp_bar = malloc(sizeof(*combattant->hp_bar));
    combattant->status = 0;
    combattant->stats = stats;
    combattant->spr_combtnt = sfSprite_create();
    combattant->texture_combtnt = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(combattant->spr_combtnt, combattant->texture_combtnt, \
    sfTrue);
    sfSprite_setTextureRect(combattant->spr_combtnt, rect);
    sfSprite_setPosition(combattant->spr_combtnt, combattant->pos);
    sfSprite_setScale(combattant->spr_combtnt, (sfVector2f){3, 3});

    set_combattant_variables(combattant, name);
}
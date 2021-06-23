/*
** EPITECH PROJECT, 2021
** init stats board
** File description:
** initializes the stats board for a combattant
*/

#include "my.h"

sfText *init_stats_text(sfText *text, int value, sfVector2f pos)
{
    sfFont *font = sfFont_createFromFile("assets/font/mariokart.ttf");

    text = sfText_create();
    sfText_setString(text, my_int_to_str(value));
    sfText_setCharacterSize(text, 30);
    sfText_setFillColor(text, sfWhite);
    sfText_setFont(text, font);
    sfText_setOutlineColor(text, sfBlack);
    sfText_setOutlineThickness(text, 2);
    sfText_setPosition(text, pos);
    return (text);
}

void initialize_all_stats(combattant_s *fight, sfVector2f b_pos)
{
    float width = 507 * 0.6;
    float height = 436 * 0.6;

    fight->txt.hp = init_stats_text(fight->txt.hp, fight->stats\
    ->hp, (sfVector2f){b_pos.x + width / 2.2, b_pos.y + (height / 20 * 1)});
    fight->txt.max_hp = init_stats_text(fight->txt.max_hp, fight->stats->max_hp\
    , (sfVector2f){b_pos.x + width / 1.5, b_pos.y + (height / 20 * 1)});
    fight->txt.atk = init_stats_text(fight->txt.atk, fight->stats->atk, \
    (sfVector2f){b_pos.x + width / 2.2, b_pos.y + (height / 20 * 4)});
    fight->txt.def = init_stats_text(fight->txt.def, fight->stats->def, \
    (sfVector2f){b_pos.x + width / 2.2, b_pos.y + (height / 20 * 8)});
    fight->txt.exp = init_stats_text(fight->txt.exp, fight->stats->exp, \
    (sfVector2f){b_pos.x + width / 2.2, b_pos.y + (height / 20 * 11)});
    fight->txt.level = init_stats_text(fight->txt.level, fight->stats->level, \
    (sfVector2f){b_pos.x + width / 2.2, b_pos.y + (height / 20 * 15)});
}

void init_stats_board(combattant_s *fight, sfVector2f pos)
{
    sfVector2f b_pos = {pos.x, pos.y - 400};

    fight->spr_stats = sfSprite_create();
    fight->texture_stats = sfTexture_createFromFile(\
    "assets/sprite/stats.png", NULL);
    sfSprite_setTexture(fight->spr_stats, fight->texture_stats, sfTrue);
    sfSprite_setPosition(fight->spr_stats, b_pos);
    sfSprite_setScale(fight->spr_stats, (sfVector2f){0.6, 0.6});
    initialize_all_stats(fight, b_pos);
}
/*
** EPITECH PROJECT, 2021
** combat draw
** File description:
** draws the combat scene
*/

#include "my.h"

void draw_hp(sfRenderWindow *wndw, combat_s *combat)
{
    sfRenderWindow_drawRectangleShape(\
    wndw, combat->player->hp_bar->bg_bar, NULL);
    sfRenderWindow_drawRectangleShape(\
    wndw, combat->player->hp_bar->fill_bar, NULL);
    sfRenderWindow_drawRectangleShape(\
    wndw, combat->opponent->hp_bar->bg_bar, NULL);
    sfRenderWindow_drawRectangleShape(\
    wndw, combat->opponent->hp_bar->fill_bar, NULL);
    sfRenderWindow_drawText(\
    wndw, combat->player->name, NULL);
    sfRenderWindow_drawText(\
    wndw, combat->opponent->name, NULL);
}

void draw_stats_text(sfRenderWindow *wndw, combattant_s *combattant)
{
    sfRenderWindow_drawText(wndw, combattant->txt.hp, NULL);
    sfRenderWindow_drawText(wndw, combattant->txt.max_hp, NULL);
    sfRenderWindow_drawText(wndw, combattant->txt.atk, NULL);
    sfRenderWindow_drawText(wndw, combattant->txt.def, NULL);
    sfRenderWindow_drawText(wndw, combattant->txt.exp, NULL);
    sfRenderWindow_drawText(wndw, combattant->txt.level, NULL);
}

void combat_draw(sfRenderWindow *wndw, combat_s *combat)
{
    sfRenderWindow_drawSprite(wndw, combat->bg_sprite, NULL);
    sfRenderWindow_drawSprite(wndw, combat->keys_sprite, NULL);

    sfRenderWindow_drawSprite(wndw, combat->player->spr_combtnt, NULL);
    sfRenderWindow_drawSprite(wndw, combat->opponent->spr_combtnt, NULL);

    sfRenderWindow_drawSprite(wndw, combat->player->spr_stats, NULL);
    sfRenderWindow_drawSprite(wndw, combat->opponent->spr_stats, NULL);
    draw_stats_text(wndw, combat->player);
    draw_stats_text(wndw, combat->opponent);
    draw_hp(wndw, combat);
}
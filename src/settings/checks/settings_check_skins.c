/*
** EPITECH PROJECT, 2021
** settings_check_skins.c
** File description:
** functions to check for settings skins
*/

#include "my.h"

void settings_back_check(game_s *game, settings_s *settings, sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(settings->back_arrow_sprite);

    if (is_sprite_hovered_raw(settings->back_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->back_arrow_sprite, \
        (sfIntRect){66, 0, 66, 44});
    } else
        sfSprite_setTextureRect(settings->back_arrow_sprite, \
        (sfIntRect){-1, 0, 66, 44});
    if (is_sprite_clicked_raw(settings->back_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->back_arrow_sprite, \
        (sfIntRect){132, 0, 65, 44});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        game->scene = 0;
}

void settings_skin_left_check(game_s *game, settings_s *settings, \
sfVector2i mpos)
{
    sfFloatRect rect = \
    sfSprite_getGlobalBounds(settings->skin_left_arrow_sprite);

    if (is_sprite_hovered_raw(settings->skin_left_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->skin_left_arrow_sprite, \
        (sfIntRect){31, 0, 30, 35});
    } else
        sfSprite_setTextureRect(settings->skin_left_arrow_sprite, \
        (sfIntRect){-3, 0, 30, 35});
    if (is_sprite_clicked_raw(settings->skin_left_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->skin_left_arrow_sprite, \
        (sfIntRect){63, 0, 30, 35});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y) && game->skin_choice > 0)
        game->skin_choice --;
}

void settings_skin_right_check(game_s *game, settings_s *settings, \
sfVector2i mpos)
{
    sfFloatRect rect = \
    sfSprite_getGlobalBounds(settings->skin_right_arrow_sprite);

    if (is_sprite_hovered_raw(settings->skin_right_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->skin_right_arrow_sprite, \
        (sfIntRect){128, 0, 30, 35});
    } else
        sfSprite_setTextureRect(settings->skin_right_arrow_sprite, \
        (sfIntRect){98, 0, 30, 35});
    if (is_sprite_clicked_raw(settings->skin_right_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->skin_right_arrow_sprite, \
        (sfIntRect){156, 0, 30, 35});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y) && game->skin_choice < 1)
        game->skin_choice ++;
    sfText_setString(game->skin_choice_text, my_int_to_str(game->skin_choice));
}
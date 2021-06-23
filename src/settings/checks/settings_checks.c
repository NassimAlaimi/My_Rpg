/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** settings_checks
*/

#include "my.h"

void settings_music_left_check(game_s *game, settings_s *settings, \
sfVector2i mpos)
{
    sfFloatRect rect = \
    sfSprite_getGlobalBounds(settings->music_left_arrow_sprite);

    if (is_sprite_hovered_raw(settings->music_left_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->music_left_arrow_sprite, \
        (sfIntRect){31, 0, 30, 35});
    } else
        sfSprite_setTextureRect(settings->music_left_arrow_sprite, \
        (sfIntRect){-3, 0, 30, 35});
    if (is_sprite_clicked_raw(settings->music_left_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->music_left_arrow_sprite, \
        (sfIntRect){63, 0, 30, 35});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y) && game->music_volume > 0)
        game->music_volume --;
}

void settings_music_right_check(game_s *game, settings_s *settings, \
sfVector2i mpos)
{
    sfFloatRect rect = \
    sfSprite_getGlobalBounds(settings->music_right_arrow_sprite);

    if (is_sprite_hovered_raw(settings->music_right_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->music_right_arrow_sprite, \
        (sfIntRect){128, 0, 30, 35});
    } else
        sfSprite_setTextureRect(settings->music_right_arrow_sprite, \
        (sfIntRect){98, 0, 30, 35});
    if (is_sprite_clicked_raw(settings->music_right_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->music_right_arrow_sprite, \
        (sfIntRect){156, 0, 30, 35});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y) && game->music_volume < 99)
        game->music_volume ++;

    sfText_setString(game->music_volume_text, \
    my_int_to_str(game->music_volume));
    sfMusic_setVolume(game->music, game->music_volume);
}

void settings_sound_left_check(game_s *game, settings_s *settings, \
sfVector2i mpos)
{
    sfFloatRect rect = \
    sfSprite_getGlobalBounds(settings->sound_left_arrow_sprite);

    if (is_sprite_hovered_raw(settings->sound_left_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->sound_left_arrow_sprite, \
        (sfIntRect){31, 0, 30, 35});
    } else
        sfSprite_setTextureRect(settings->sound_left_arrow_sprite, \
        (sfIntRect){-3, 0, 30, 35});
    if (is_sprite_clicked_raw(settings->sound_left_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->sound_left_arrow_sprite, \
        (sfIntRect){63, 0, 30, 35});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y) && game->sound_volume > 0)
        game->sound_volume --;
}

void settings_sound_right_check(game_s *game, settings_s *settings, \
sfVector2i mpos)
{
    sfFloatRect rect = \
    sfSprite_getGlobalBounds(settings->sound_right_arrow_sprite);

    if (is_sprite_hovered_raw(settings->sound_right_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->sound_right_arrow_sprite, \
        (sfIntRect){128, 0, 30, 35});
    } else
        sfSprite_setTextureRect(settings->sound_right_arrow_sprite, \
        (sfIntRect){98, 0, 30, 35});
    if (is_sprite_clicked_raw(settings->sound_right_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(settings->sound_right_arrow_sprite, \
        (sfIntRect){156, 0, 30, 35});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y) && game->sound_volume < 99)
        game->sound_volume ++;

    sfText_setString(game->sound_volume_text, \
    my_int_to_str(game->sound_volume));
}

void settings_checks(game_s *game, settings_s *settings)
{
    (void)settings;

    sfVector2i mpos = sfMouse_getPositionRenderWindow(game->window);

    if (sfKeyboard_isKeyPressed(sfKeyX))
        game->scene++;

    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        settings_back_check(game, settings, mpos);
        settings_skin_left_check(game, settings, mpos);
        settings_skin_right_check(game, settings, mpos);
        settings_music_left_check(game, settings, mpos);
        settings_music_right_check(game, settings, mpos);
        settings_sound_left_check(game, settings, mpos);
        settings_sound_right_check(game, settings, mpos);
    }
}
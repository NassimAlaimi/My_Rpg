/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** settings_init2
*/

#include "my.h"

void settings_init_background(settings_s *settings)
{
    settings->bg_sprite = sfSprite_create();
    settings->bg_texture = \
    sfTexture_createFromFile("assets/sprite/menu_bg.jpg", NULL);
    sfSprite_setTexture(settings->bg_sprite, settings->bg_texture, sfFalse);
    sfSprite_setScale(settings->bg_sprite, (sfVector2f){3, 3});
    sfSprite_setPosition(settings->bg_sprite, (sfVector2f){-1900, 0});
}

void settings_init_skin_choice(settings_s *settings)
{
    settings->skin_right_arrow_sprite = sfSprite_create();
    sfSprite_setTexture(settings->skin_right_arrow_sprite, \
    settings->arrows_texture, sfFalse);
    sfSprite_setScale(settings->skin_right_arrow_sprite, \
    (sfVector2f){1.8, 1.8});
    sfSprite_setPosition(settings->skin_right_arrow_sprite, \
    (sfVector2f){1200, 402});
    sfSprite_setTextureRect(settings->skin_right_arrow_sprite, \
    (sfIntRect){100, 0, 30, 35});

    settings->skin_left_arrow_sprite = sfSprite_create();
    sfSprite_setTexture(settings->skin_left_arrow_sprite, \
    settings->arrows_texture, sfFalse);
    sfSprite_setScale(settings->skin_left_arrow_sprite, \
    (sfVector2f){1.8, 1.8});
    sfSprite_setPosition(settings->skin_left_arrow_sprite, \
    (sfVector2f){1000, 400});
    sfSprite_setTextureRect(settings->skin_left_arrow_sprite, \
    (sfIntRect){0, 0, 30, 35});
}

void settings_init_music(settings_s *settings)
{
    settings->music_right_arrow_sprite = sfSprite_create();
    sfSprite_setTexture(settings->music_right_arrow_sprite, \
    settings->arrows_texture, sfFalse);
    sfSprite_setScale(settings->music_right_arrow_sprite, \
    (sfVector2f){1.8, 1.8});
    sfSprite_setPosition(settings->music_right_arrow_sprite, \
    (sfVector2f){1200, 602});
    sfSprite_setTextureRect(settings->music_right_arrow_sprite, \
    (sfIntRect){100, 0, 30, 35});

    settings->music_left_arrow_sprite = sfSprite_create();
    sfSprite_setTexture(settings->music_left_arrow_sprite, \
    settings->arrows_texture, sfFalse);
    sfSprite_setScale(settings->music_left_arrow_sprite, \
    (sfVector2f){1.8, 1.8});
    sfSprite_setPosition(settings->music_left_arrow_sprite, \
    (sfVector2f){1000, 600});
    sfSprite_setTextureRect(settings->music_left_arrow_sprite, \
    (sfIntRect){0, 0, 30, 35});
}

void settings_init_sound(settings_s *settings)
{
    settings->sound_right_arrow_sprite = sfSprite_create();
    sfSprite_setTexture(settings->sound_right_arrow_sprite, \
    settings->arrows_texture, sfFalse);
    sfSprite_setScale(settings->sound_right_arrow_sprite, \
    (sfVector2f){1.8, 1.8});
    sfSprite_setPosition(settings->sound_right_arrow_sprite, \
    (sfVector2f){1200, 802});
    sfSprite_setTextureRect(settings->sound_right_arrow_sprite, \
    (sfIntRect){100, 0, 30, 35});

    settings->sound_left_arrow_sprite = sfSprite_create();
    sfSprite_setTexture(settings->sound_left_arrow_sprite, \
    settings->arrows_texture, sfFalse);
    sfSprite_setScale(settings->sound_left_arrow_sprite, \
    (sfVector2f){1.8, 1.8});
    sfSprite_setPosition(settings->sound_left_arrow_sprite, \
    (sfVector2f){1000, 800});
    sfSprite_setTextureRect(settings->sound_left_arrow_sprite, \
    (sfIntRect){0, 0, 30, 35});
}
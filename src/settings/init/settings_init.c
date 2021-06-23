/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** settings_init
*/

#include "my.h"

void settings_init_logo(settings_s *settings)
{
    settings->settings_logo_sprite = sfSprite_create();
    settings->settings_logo_texture = \
    sfTexture_createFromFile("assets/sprite/Settings.png", NULL);
    sfSprite_setTexture(settings->settings_logo_sprite, \
    settings->settings_logo_texture, sfFalse);
    sfSprite_setScale(settings->settings_logo_sprite, (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(settings->settings_logo_sprite, (sfVector2f){620, 70});
    sfSprite_setTextureRect(settings->settings_logo_sprite, \
    (sfIntRect){0, 0, 934, 217});

    settings->back_arrow_sprite = sfSprite_create();
    settings->back_arrow_texture = \
    sfTexture_createFromFile("assets/sprite/back_arrow.png", NULL);
    sfSprite_setTexture(settings->back_arrow_sprite, \
    settings->back_arrow_texture, sfFalse);
    sfSprite_setScale(settings->back_arrow_sprite, (sfVector2f){2, 2});
    sfSprite_setPosition(settings->back_arrow_sprite, (sfVector2f){50, 50});
    sfSprite_setTextureRect(settings->back_arrow_sprite, \
    (sfIntRect){-1, 0, 66, 44});
}

void settings_init_skin_text(settings_s *settings, game_s *game)
{
    settings->skin_logo_sprite = sfSprite_create();
    settings->skin_logo_texture = \
    sfTexture_createFromFile("assets/sprite/skin_logo.png", NULL);
    sfSprite_setTexture(settings->skin_logo_sprite, \
    settings->skin_logo_texture, sfFalse);
    sfSprite_setScale(settings->skin_logo_sprite, (sfVector2f){0.6, 0.6});
    sfSprite_setPosition(settings->skin_logo_sprite, (sfVector2f){630, 380});

    game->skin_choice_text = sfText_create();
    sfText_setFont(game->skin_choice_text, game->fipps_font);
    sfText_setString(game->skin_choice_text, my_int_to_str(game->skin_choice));
    sfText_setColor(game->skin_choice_text, sfBlack);
    sfText_setCharacterSize(game->skin_choice_text, 33);
    sfText_setPosition(game->skin_choice_text, (sfVector2f){1110, 415});
}

void settings_init_sound_text(settings_s *settings, game_s *game)
{
    settings->sound_logo_sprite = sfSprite_create();
    settings->sound_logo_texture = \
    sfTexture_createFromFile("assets/sprite/sound_logo.png", NULL);
    sfSprite_setTexture(settings->sound_logo_sprite, \
    settings->sound_logo_texture, sfFalse);
    sfSprite_setScale(settings->sound_logo_sprite, (sfVector2f){0.6, 0.6});
    sfSprite_setPosition(settings->sound_logo_sprite, (sfVector2f){630, 780});

    game->sound_volume_text = sfText_create();
    sfText_setFont(game->sound_volume_text, game->fipps_font);
    sfText_setString(game->sound_volume_text, \
    my_int_to_str(game->sound_volume));
    sfText_setColor(game->sound_volume_text, sfBlack);
    sfText_setCharacterSize(game->sound_volume_text, 33);
    sfText_setPosition(game->sound_volume_text, (sfVector2f){1110, 815});
}

void settings_init_music_text(settings_s *settings, game_s *game)
{
    settings->music_logo_sprite = sfSprite_create();
    settings->music_logo_texture = \
    sfTexture_createFromFile("assets/sprite/music_logo.png", NULL);
    sfSprite_setTexture(settings->music_logo_sprite, \
    settings->music_logo_texture, sfFalse);
    sfSprite_setScale(settings->music_logo_sprite, (sfVector2f){0.6, 0.6});
    sfSprite_setPosition(settings->music_logo_sprite, (sfVector2f){630, 580});

    game->music_volume_text = sfText_create();
    sfText_setFont(game->music_volume_text, game->fipps_font);
    sfText_setString(game->music_volume_text, \
    my_int_to_str(game->music_volume));
    sfText_setColor(game->music_volume_text, sfBlack);
    sfText_setCharacterSize(game->music_volume_text, 33);
    sfText_setPosition(game->music_volume_text, (sfVector2f){1110, 615});
}

settings_s *settings_init(settings_s *settings, game_s *game)
{
    settings = malloc(sizeof(*settings));
    if (settings == NULL)
        return (NULL);

    settings->arrows_texture = \
    sfTexture_createFromFile("assets/sprite/left_right_arrows.png", NULL);
    settings->bg_clock = sfClock_create();
    settings_init_background(settings);
    settings_init_logo(settings);
    settings_init_skin_choice(settings);
    settings_init_music(settings);
    settings_init_sound(settings);
    settings_init_skin_text(settings, game);
    settings_init_sound_text(settings, game);
    settings_init_music_text(settings, game);

    return (settings);
}
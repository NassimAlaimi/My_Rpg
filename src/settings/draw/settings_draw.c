/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** settings_draw
*/

#include "my.h"

void settings_draw_move_bg(settings_s *settings)
{
    settings->bg_time = sfClock_getElapsedTime(settings->bg_clock);
    settings->elaspedtime = sfTime_asMilliseconds(settings->bg_time);

    if (settings->elaspedtime > 5) {
        sfSprite_move(settings->bg_sprite, (sfVector2f){0.2, -0.2});
        sfClock_restart(settings->bg_clock);
    }
}

void settings_draw_hud(settings_s *settings, game_s *game)
{
    sfRenderWindow_drawSprite(game->window, settings->bg_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    settings->settings_logo_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, settings->back_arrow_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    settings->skin_right_arrow_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    settings->skin_left_arrow_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    settings->music_left_arrow_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    settings->music_right_arrow_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    settings->sound_left_arrow_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, \
    settings->sound_right_arrow_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, settings->skin_logo_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, settings->music_logo_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, settings->sound_logo_sprite, NULL);
}

void settings_draw(game_s *game, settings_s *settings)
{
    settings_draw_move_bg(settings);
    settings_draw_hud(settings, game);

    sfRenderWindow_drawText(game->window, game->skin_choice_text, NULL);
    sfRenderWindow_drawText(game->window, game->music_volume_text, NULL);
    sfRenderWindow_drawText(game->window, game->sound_volume_text, NULL);
}
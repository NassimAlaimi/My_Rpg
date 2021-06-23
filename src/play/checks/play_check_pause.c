/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_check_pause
*/

#include "my.h"

void play_pause_resume_check(play_s *play, sfVector2i mpos, game_s *game)
{
    sfFloatRect rect = \
    sfSprite_getGlobalBounds(play->pause_resume_sprite);

    if (is_sprite_hovered_raw(play->pause_resume_sprite, mpos)) {
        sfSprite_setTextureRect(play->pause_resume_sprite, \
        (sfIntRect){750, 0, 750, 126});
    } else
        sfSprite_setTextureRect(play->pause_resume_sprite, \
        (sfIntRect){0, 0, 750, 126});
    if (is_sprite_clicked_raw(play->pause_resume_sprite, mpos)) {
        sfSprite_setTextureRect(play->pause_resume_sprite, \
        (sfIntRect){1500, 0, 750, 126});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
sfFloatRect_contains(&rect, mpos.x, mpos.y))
        play->pause = false;
}

void play_pause_menu_check(play_s *play, sfVector2i mpos, game_s *game)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(play->pause_mainmenu_sprite);

    if (is_sprite_hovered_raw(play->pause_mainmenu_sprite, mpos)) {
        sfSprite_setTextureRect(play->pause_mainmenu_sprite, \
        (sfIntRect){1063, 0, 1063, 156});
    } else
        sfSprite_setTextureRect(play->pause_mainmenu_sprite, \
        (sfIntRect){0, 0, 1063, 156});
    if (is_sprite_clicked_raw(play->pause_mainmenu_sprite, mpos)) {
        sfSprite_setTextureRect(play->pause_mainmenu_sprite, \
        (sfIntRect){2126, 0, 1063, 156});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        game->scene = 0;
}

void play_pause_quit_check(play_s *play, sfVector2i mpos, game_s *game)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(play->pause_quit_sprite);

    if (is_sprite_hovered_raw(play->pause_quit_sprite, mpos)) {
        sfSprite_setTextureRect(play->pause_quit_sprite, \
        (sfIntRect){434, 0, 434, 217});
    } else
        sfSprite_setTextureRect(play->pause_quit_sprite, \
        (sfIntRect){0, 0, 434, 217});
    if (is_sprite_clicked_raw(play->pause_quit_sprite, mpos)) {
        sfSprite_setTextureRect(play->pause_quit_sprite, \
        (sfIntRect){868, 0, 434, 217});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        sfRenderWindow_close(game->window);
}

void play_pause_buttons_check(play_s *play, sfVector2i mpos, game_s *game)
{
    sfVector2f view_pos = sfView_getCenter(play->view);

    float view_top = view_pos.y - 270;
    mpos.y /= 2;
    mpos.y += view_top;

    float view_left = view_pos.x - 480;
    mpos.x /= 2;
    mpos.x += view_left;

    play_pause_resume_check(play, mpos, game);
    play_pause_menu_check(play, mpos, game);
    play_pause_quit_check(play, mpos, game);
}
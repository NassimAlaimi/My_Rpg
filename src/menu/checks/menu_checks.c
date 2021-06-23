/*
** EPITECH PROJECT, 2021
** menu_checks.c
** File description:
** function to check for inputs in menu
*/

#include "my.h"

void menu_playbutton_check(game_s *game, menu_s *menu, sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu->playbutton_sprite);

    if (is_sprite_hovered_raw(menu->playbutton_sprite, mpos)) {
        sfSprite_setPosition(menu->arrow_sprite, (sfVector2f){695, 560});
        sfSprite_setTextureRect(menu->playbutton_sprite, \
        (sfIntRect){525, 0, 525, 244});
    } else
        sfSprite_setTextureRect(menu->playbutton_sprite, \
        (sfIntRect){0, 0, 525, 244});
    if (is_sprite_clicked_raw(menu->playbutton_sprite, mpos)) {
        sfSprite_setTextureRect(menu->playbutton_sprite, \
        (sfIntRect){1050, 0, 525, 244});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        game->scene = 1;
}

void menu_htpbutton_check(game_s *game, menu_s *menu, sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu->htpbutton_sprite);

    if (is_sprite_hovered_raw(menu->htpbutton_sprite, mpos)) {
        sfSprite_setPosition(menu->arrow_sprite, (sfVector2f){545, 690});
        sfSprite_setTextureRect(menu->htpbutton_sprite, \
        (sfIntRect){1255, 0, 1254, 240});
    } else
        sfSprite_setTextureRect(menu->htpbutton_sprite, \
        (sfIntRect){0, 0, 1250, 240});
    if (is_sprite_clicked_raw(menu->htpbutton_sprite, mpos)) {
        sfSprite_setTextureRect(menu->htpbutton_sprite, \
        (sfIntRect){2515, 0, 1250, 240});
    }

    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        game->scene = 3;
}

void menu_settingsbutton_check(game_s *game, menu_s *menu, sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu->settingsbutton_sprite);

    if (is_sprite_hovered_raw(menu->settingsbutton_sprite, mpos)) {
        sfSprite_setPosition(menu->arrow_sprite, (sfVector2f){615, 820});
        sfSprite_setTextureRect(menu->settingsbutton_sprite, \
        (sfIntRect){934, 0, 934, 217});
    } else
        sfSprite_setTextureRect(menu->settingsbutton_sprite, \
        (sfIntRect){0, 0, 934, 217});
    if (is_sprite_clicked_raw(menu->settingsbutton_sprite, mpos)) {
        sfSprite_setTextureRect(menu->settingsbutton_sprite, \
        (sfIntRect){1873, 0, 934, 217});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        game->scene = 2;
}

void menu_quitbutton_check(game_s *game, menu_s *menu, sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu->quitbutton_sprite);

    if (is_sprite_hovered_raw(menu->quitbutton_sprite, mpos)) {
        sfSprite_setPosition(menu->arrow_sprite, (sfVector2f){700, 935});
        sfSprite_setTextureRect(menu->quitbutton_sprite, \
        (sfIntRect){433, 0, 434, 217});
    } else
        sfSprite_setTextureRect(menu->quitbutton_sprite, \
        (sfIntRect){-3, 0, 434, 217});
    if (is_sprite_clicked_raw(menu->quitbutton_sprite, mpos)) {
        sfSprite_setTextureRect(menu->quitbutton_sprite, \
        (sfIntRect){868, 0, 434, 217});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        sfRenderWindow_close(game->window);
}

void menu_checks(game_s *game, menu_s *menu)
{
    (void)menu;

    sfVector2i mpos = sfMouse_getPositionRenderWindow(game->window);

    if (sfKeyboard_isKeyPressed(sfKeyX))
        game->scene++;

    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        menu_playbutton_check(game, menu, mpos);
        menu_htpbutton_check(game, menu, mpos);
        menu_settingsbutton_check(game, menu, mpos);
        menu_quitbutton_check(game, menu, mpos);
    }
}
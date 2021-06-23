/*
** EPITECH PROJECT, 2021
** victory_checks.c
** File description:
** function to check for inputs in victory
*/

#include "my.h"

void victory_quitbutton_check(game_s *game, victory_s *victory, \
sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(victory->quit_button_sprite);

    if (is_sprite_hovered_raw(victory->quit_button_sprite, mpos)) {
        sfSprite_setTextureRect(victory->quit_button_sprite, \
        (sfIntRect){435, 0, 434, 217});
    } else
        sfSprite_setTextureRect(victory->quit_button_sprite, \
        (sfIntRect){-3, 0, 434, 217});
    if (is_sprite_clicked_raw(victory->quit_button_sprite, mpos)) {
        sfSprite_setTextureRect(victory->quit_button_sprite, \
        (sfIntRect){870, 0, 434, 217});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        sfRenderWindow_close(game->window);
}

void victory_mainmenu_check(victory_s *victory, \
sfVector2i mpos, game_s *game)
{
    sfFloatRect rect = \
    sfSprite_getGlobalBounds(victory->mainmenu_button_sprite);

    if (is_sprite_hovered_raw(victory->mainmenu_button_sprite, mpos)) {
        sfSprite_setTextureRect(victory->mainmenu_button_sprite, \
        (sfIntRect){1063, 0, 1063, 156});
    } else
        sfSprite_setTextureRect(victory->mainmenu_button_sprite, \
        (sfIntRect){0, 0, 1063, 156});
    if (is_sprite_clicked_raw(victory->mainmenu_button_sprite, mpos)) {
        sfSprite_setTextureRect(victory->mainmenu_button_sprite, \
        (sfIntRect){2126, 0, 1063, 156});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        game->scene = 0;
}

void victory_checks(game_s *game, victory_s *victory)
{
    (void)victory;

    sfVector2i mpos = sfMouse_getPositionRenderWindow(game->window);

    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        victory_quitbutton_check(game, victory, mpos);
        victory_mainmenu_check(victory, mpos, game);
    }
}
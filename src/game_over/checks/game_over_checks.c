/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** game_over_checks
*/

#include "my.h"

void game_over_quitbutton_check(game_s *game, game_over_s *game_over, \
sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(game_over->quit_button_sprite);

    if (is_sprite_hovered_raw(game_over->quit_button_sprite, mpos)) {
        sfSprite_setTextureRect(game_over->quit_button_sprite, \
        (sfIntRect){435, 0, 434, 217});
    } else
        sfSprite_setTextureRect(game_over->quit_button_sprite, \
        (sfIntRect){-3, 0, 434, 217});
    if (is_sprite_clicked_raw(game_over->quit_button_sprite, mpos)) {
        sfSprite_setTextureRect(game_over->quit_button_sprite, \
        (sfIntRect){870, 0, 434, 217});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        sfRenderWindow_close(game->window);
}

void game_over_mainmenu_check(game_over_s *game_over, \
sfVector2i mpos, game_s *game)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(\
    game_over->mainmenu_button_sprite);

    if (is_sprite_hovered_raw(game_over->mainmenu_button_sprite, mpos)) {
        sfSprite_setTextureRect(game_over->mainmenu_button_sprite, \
        (sfIntRect){1063, 0, 1063, 156});
    } else
        sfSprite_setTextureRect(game_over->mainmenu_button_sprite, \
        (sfIntRect){0, 0, 1063, 156});
    if (is_sprite_clicked_raw(game_over->mainmenu_button_sprite, mpos)) {
        sfSprite_setTextureRect(game_over->mainmenu_button_sprite, \
        (sfIntRect){2126, 0, 1063, 156});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        game->scene = 0;
}

void game_over_checks(game_s *game, game_over_s *game_over)
{
    (void)game_over;

    sfVector2i mpos = sfMouse_getPositionRenderWindow(game->window);

    if (sfKeyboard_isKeyPressed(sfKeyX))
        game->scene++;

    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        game_over_quitbutton_check(game, game_over, mpos);
        game_over_mainmenu_check(game_over, mpos, game);
    }
}
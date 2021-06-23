/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** howtoplay_checks
*/

#include "my.h"

void howtoplay_back_check(game_s *game, howtoplay_s *howtoplay, sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(howtoplay->back_arrow_sprite);

    if (is_sprite_hovered_raw(howtoplay->back_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(howtoplay->back_arrow_sprite, \
        (sfIntRect){66, 0, 66, 44});
    } else
        sfSprite_setTextureRect(howtoplay->back_arrow_sprite, \
        (sfIntRect){-1, 0, 66, 44});
    if (is_sprite_clicked_raw(howtoplay->back_arrow_sprite, mpos)) {
        sfSprite_setTextureRect(howtoplay->back_arrow_sprite, \
        (sfIntRect){132, 0, 65, 44});
    }
    if (game->event.type == sfEvtMouseButtonReleased && \
        sfFloatRect_contains(&rect, mpos.x, mpos.y))
        game->scene = 0;
}

void howtoplay_checks(game_s *game, howtoplay_s *howtoplay)
{
    (void)howtoplay;

    sfVector2i mpos = sfMouse_getPositionRenderWindow(game->window);

    if (sfKeyboard_isKeyPressed(sfKeyX))
        game->scene++;

    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        howtoplay_back_check(game, howtoplay, mpos);
    }
}
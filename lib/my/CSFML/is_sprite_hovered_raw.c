/*
** EPITECH PROJECT, 2020
** is_sprite_hovered.c
** File description:
** function to check if a sprite was hovered (whole sprite - no pixel perfect)
*/

#include "my.h"

sfBool is_sprite_hovered_raw(sfSprite *spr, sfVector2i mpos)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(spr);

    if (!sfMouse_isButtonPressed(sfMouseLeft) && \
    sfFloatRect_contains(&rect, mpos.x, mpos.y)) {
        return (sfTrue);
    }
    return (sfFalse);
}
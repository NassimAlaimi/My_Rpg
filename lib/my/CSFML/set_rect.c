/*
** EPITECH PROJECT, 2021
** set_rect.c
** File description:
** shortest function to set a texture rect
*/

#include "my.h"

void set_rect(sfSprite *spr, sfIntRect rect)
{
    sfSprite_setTextureRect(spr, rect);
}
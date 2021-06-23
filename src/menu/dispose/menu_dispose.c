/*
** EPITECH PROJECT, 2021
** menu_dispose.c
** File description:
** function to free and destroy everything from menu
*/

#include "my.h"

void menu_dispose(menu_s *menu)
{
    sfTexture_destroy(menu->bg_texture);
    sfSprite_destroy(menu->bg_sprite);
}
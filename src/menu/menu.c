/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** main menu function
*/

#include "my.h"

int menu(game_s *game)
{
    menu_s *menu = NULL;

    menu = menu_init(menu);
    if (menu == NULL)
        return (-1);

    while (sfRenderWindow_isOpen(game->window) && game->scene == 0) {
        sfRenderWindow_clear(game->window, sfBlack);

        menu_checks(game, menu);
        menu_draw(game, menu);

        sfRenderWindow_display(game->window);
    }
    menu_dispose(menu);
    return (0);
}
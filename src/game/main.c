/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/

#include "my.h"

int my_rpg(void)
{
    game_s *game = NULL;
    int (*draw_scene[])(game_s*) = {menu, play, settings, howtoplay, \
victory, game_over};

    game = init_game(game);
    if (game == NULL)
        return (-1);
    sfMusic_play(game->music);
    while (sfRenderWindow_isOpen(game->window)) {
        if (draw_scene[game->scene](game) == -1)
            return (print_error("Error: Memory allocation failed\n"));
    }
    game_dispose(game);
    return (0);
}

int main(int ac, char **av)
{
    (void)av;

    if (error_handling(ac) == -1)
        return (84);
    if (my_rpg() == -1)
        return (84);
    return (0);
}
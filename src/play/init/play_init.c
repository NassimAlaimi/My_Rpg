/*
** EPITECH PROJECT, 2021
** play_init.c
** File description:
** function to initialize the main play
*/

#include "my.h"

void play_init_view(game_s *game, play_s *play)
{
    play->view = sfView_create();
    play->view_size = (sfVector2f){1920 / 2, 1080 / 2};
    sfView_setSize(play->view, play->view_size);

    sfView_setCenter(play->view, \
    sfSprite_getPosition(play->player->player_sprite));
    sfRenderWindow_setView(game->window, play->view);
}

void play_init_aggro_area(play_s *play)
{
    play->aggro_area = sfRectangleShape_create();
    sfRectangleShape_setSize(play->aggro_area, (sfVector2f){100, 300});
    sfRectangleShape_setPosition(play->aggro_area, (sfVector2f){1510, 2000});
    sfRectangleShape_setFillColor(play->aggro_area, sfGreen);
}

play_s *play_init(game_s *game, play_s *play)
{
    play = malloc(sizeof(*play));
    if (play == NULL)
        return (NULL);
    play->box = init_box(play->box);
    play->player = init_player(play->player);
    if (play_init_ground(play) == -1)
        return (NULL);
    if (play_init_walls(play) == -1)
        return (NULL);
    if (play_init_towers(play) == -1)
        return (NULL);
    if (play_init_fences(play) == -1)
        return (NULL);
    if (play_init_collision(play) == -1)
        return (NULL);
    play_init_npc(play);
    play_init_view(game, play);
    play_init_inventory(play);
    play_init_aggro_area(play);
    return (play);
}
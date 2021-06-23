/*
** EPITECH PROJECT, 2021
** play_draw_walls.c
** File description:
** functions to draw walls
*/

#include "my.h"

void play_draw_walls_nested(game_s *game, play_s *play, sfVector2f pos, int y)
{
    int x = 0;
    float xhalf = (1920 / 1.5) / 2;

    x = 0;
    if ((pos.x / 32 - xhalf / 32) > 0)
        x = (pos.x / 32 - xhalf / 32);

    if (pos.y >= y * 32 - 17)
        sfRenderWindow_drawSprite(game->window, \
        play->player->player_sprite, NULL);
    while (play->walls_sprite[y][x] != NULL && x < (pos.x / 32 + xhalf / 32)) {
        sfRenderWindow_drawSprite(game->window, play->walls_sprite[y][x], NULL);
        x++;
    }
}

void play_draw_walls(game_s *game, play_s *play)
{
    int y = 0;
    float yhalf = (1080 / 1.5) / 2;
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);

    if ((pos.y / 32 - yhalf / 32) > 0)
        y = (pos.y / 32 - yhalf / 32);
    while (play->walls_sprite[y] != NULL && y < (pos.y / 32 + yhalf / 32)) {
        play_draw_walls_nested(game, play, pos, y);
        y++;
    }
}
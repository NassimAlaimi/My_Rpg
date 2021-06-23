/*
** EPITECH PROJECT, 2021
** play_draw_towers.c
** File description:
** functions to draw towers
*/

#include "my.h"

void play_draw_towers(game_s *game, play_s *play)
{
    sfRenderWindow_drawSprite(game->window, play->fence_top_spr[0], NULL);
    sfRenderWindow_drawSprite(game->window, play->fence_top_spr[1], NULL);

    sfRenderWindow_drawSprite(game->window, play->towers_sprites[0], NULL);
    sfRenderWindow_drawSprite(game->window, play->towers_sprites[1], NULL);
    sfRenderWindow_drawSprite(game->window, play->fence_left_spr[0], NULL);
    sfRenderWindow_drawSprite(game->window, play->fence_left_spr[1], NULL);
    sfRenderWindow_drawSprite(game->window, play->towers_sprites[2], NULL);
    sfRenderWindow_drawSprite(game->window, play->towers_sprites[3], NULL);
}
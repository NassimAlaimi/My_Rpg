/*
** EPITECH PROJECT, 2021
** play_init_fence.c
** File description:
** functions to initialize fence map
*/

#include "my.h"

void play_init_fences_top(play_s *play)
{
    play->fence_top_spr = malloc(sizeof(*play->fence_top_spr) * 3);
    play->fence_top_texture = \
    sfTexture_createFromFile("assets/sprite/fence_top.png", NULL);

    for (int x = 0; x < 2; x++) {
        play->fence_top_spr[x] = sfSprite_create();
        sfSprite_setTexture(play->fence_top_spr[x], \
        play->fence_top_texture, sfFalse);
    }
    play->fence_top_spr[2] = NULL;

    sfSprite_setPosition(play->fence_top_spr[0], (sfVector2f){28*32, 15*32});
    sfSprite_setPosition(play->fence_top_spr[1], (sfVector2f){28*32, 76*32});
}

void play_init_fences_left(play_s *play)
{
    play->fence_left_spr = malloc(sizeof(*play->fence_left_spr) * 3);
    play->fence_left_texture = \
    sfTexture_createFromFile("assets/sprite/fence_left.png", NULL);

    for (int x = 0; x < 2; x++) {
        play->fence_left_spr[x] = sfSprite_create();
        sfSprite_setTexture(play->fence_left_spr[x], \
        play->fence_left_texture, sfFalse);
    }
    play->fence_left_spr[2] = NULL;

    sfSprite_setPosition(play->fence_left_spr[0], (sfVector2f){26*32, 17*32});
    sfSprite_setPosition(play->fence_left_spr[1], (sfVector2f){108*32, 17*32});
}

int play_init_fences(play_s *play)
{
    play_init_fences_top(play);
    play_init_fences_left(play);
    return (0);
}
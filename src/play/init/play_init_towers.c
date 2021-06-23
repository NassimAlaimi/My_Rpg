/*
** EPITECH PROJECT, 2021
** play_init_towers.c
** File description:
** functions to initialize towers map
*/

#include "my.h"

int play_init_towers(play_s *play)
{
    play->towers_sprites = malloc(sizeof(*play->towers_sprites) * 5);
    play->tower_texture = \
    sfTexture_createFromFile("assets/sprite/tower.png", NULL);

    for (int x = 0; x < 4; x++) {
        play->towers_sprites[x] = sfSprite_create();
        sfSprite_setTexture(play->towers_sprites[x], play->tower_texture, \
        sfFalse);
    }
    play->towers_sprites[4] = NULL;

    sfSprite_setPosition(play->towers_sprites[0], (sfVector2f){24*32, 12*32});
    sfSprite_setPosition(play->towers_sprites[1], (sfVector2f){106*32, 12*32});
    sfSprite_setPosition(play->towers_sprites[2], (sfVector2f){24*32, 73*32});
    sfSprite_setPosition(play->towers_sprites[3], (sfVector2f){106*32, 73*32});
    return (0);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** init_player
*/

#include "my.h"

void play_init_player(player_s *player)
{
    player->player_sprite = sfSprite_create();
    player->player_texture = sfTexture_createFromFile("assets/sprite/character/\
SpriteSheet_inmates.png", NULL);
    sfSprite_setTexture(player->player_sprite, player->player_texture, sfTrue);
    sfSprite_setTextureRect(player->player_sprite, (sfIntRect){0, 0, 25, 35});
    sfFloatRect rect = sfSprite_getGlobalBounds(player->player_sprite);
    sfSprite_setOrigin(player->player_sprite, (sfVector2f){rect.width / 2, \
rect.height / 2});
    sfSprite_setPosition(player->player_sprite, (sfVector2f){1100, 800});
    player->player_clock = sfClock_create();
    player->player_ms = 0;
    player->sprite_clock = sfClock_create();
    player->sprite_ms = 0;
}

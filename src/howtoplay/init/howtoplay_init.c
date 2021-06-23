/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** howtoplay_init
*/

#include "my.h"

void howtoplay_init_background(howtoplay_s *howtoplay)
{
    howtoplay->bg_sprite = sfSprite_create();
    howtoplay->bg_texture = \
    sfTexture_createFromFile("assets/sprite/HowToPlayGame.png", NULL);
    sfSprite_setTexture(howtoplay->bg_sprite, howtoplay->bg_texture, sfFalse);
}

void howtoplay_init_logo(howtoplay_s *howtoplay)
{
    howtoplay->htp_logo_sprite = sfSprite_create();
    howtoplay->htp_logo_texture = \
    sfTexture_createFromFile("assets/sprite/HowToPlay.png", NULL);
    sfSprite_setTexture(howtoplay->htp_logo_sprite, \
    howtoplay->htp_logo_texture, sfFalse);
    sfSprite_setScale(howtoplay->htp_logo_sprite, (sfVector2f){0.6, 0.6});
    sfSprite_setPosition(howtoplay->htp_logo_sprite, (sfVector2f){580, 50});
    sfSprite_setTextureRect(howtoplay->htp_logo_sprite, \
    (sfIntRect){0, 0, 1250, 240});

    howtoplay->back_arrow_sprite = sfSprite_create();
    howtoplay->back_arrow_texture = \
    sfTexture_createFromFile("assets/sprite/back_arrow.png", NULL);
    sfSprite_setTexture(howtoplay->back_arrow_sprite, \
    howtoplay->back_arrow_texture, sfFalse);
    sfSprite_setScale(howtoplay->back_arrow_sprite, (sfVector2f){2, 2});
    sfSprite_setPosition(howtoplay->back_arrow_sprite, (sfVector2f){50, 50});
    sfSprite_setTextureRect(howtoplay->back_arrow_sprite, \
    (sfIntRect){-1, 0, 66, 44});
}

howtoplay_s *howtoplay_init(howtoplay_s *howtoplay)
{
    howtoplay = malloc(sizeof(*howtoplay));
    if (howtoplay == NULL)
        return (NULL);

    howtoplay_init_background(howtoplay);
    howtoplay_init_logo(howtoplay);

    return (howtoplay);
}
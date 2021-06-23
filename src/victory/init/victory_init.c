/*
** EPITECH PROJECT, 2021
** victory_init.c
** File description:
** function to initialize victory
*/

#include "my.h"

void victory_init_title(game_s *game, victory_s *victory)
{
    victory->title = sfText_create();
    sfText_setFont(victory->title, game->fipps_font);
    sfText_setColor(victory->title, sfBlack);
    sfText_setOutlineColor(victory->title, sfWhite);
    sfText_setOutlineThickness(victory->title, 10);
    sfText_setCharacterSize(victory->title, 70);
    sfText_setPosition(victory->title, (sfVector2f){740, 200});
    sfText_setString(victory->title, "Victory");
}

void victory_init_mainmenu_button(victory_s *victory)
{
    victory->mainmenu_button_sprite = sfSprite_create();
    victory->mainmenu_button_texture = sfTexture_createFromFile(\
    "assets/sprite/main_menu.png", NULL);
    sfSprite_setTexture(victory->mainmenu_button_sprite, \
    victory->mainmenu_button_texture, sfTrue);
    sfSprite_setScale(victory->mainmenu_button_sprite, \
    (sfVector2f){0.6, 0.6});
    sfSprite_setPosition(victory->mainmenu_button_sprite, \
    (sfVector2f){650, 500});
    sfSprite_setTextureRect(victory->mainmenu_button_sprite, \
    (sfIntRect){0, 0, 1063, 156});
}

void victory_init_quit_button(victory_s *victory)
{
    victory->quit_button_sprite = sfSprite_create();
    victory->quit_button_texture = sfTexture_createFromFile(\
    "assets/sprite/quit.png", NULL);
    sfSprite_setTexture(victory->quit_button_sprite, \
    victory->quit_button_texture, sfTrue);
    sfSprite_setScale(victory->quit_button_sprite, (sfVector2f){0.6, 0.6});
    sfSprite_setPosition(victory->quit_button_sprite, \
    (sfVector2f){820, 700});
    sfSprite_setTextureRect(victory->quit_button_sprite, \
    (sfIntRect){0, 0, 434, 217});
}

victory_s *victory_init(game_s *game, victory_s *victory)
{
    victory = malloc(sizeof(*victory));
    victory_init_particles(victory);
    victory_init_title(game, victory);
    victory_init_mainmenu_button(victory);
    victory_init_quit_button(victory);
    return (victory);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** game_over_init
*/

#include "my.h"

void game_over_init_mainmenu_button(game_over_s *game_over)
{
    game_over->mainmenu_button_sprite = sfSprite_create();
    game_over->mainmenu_button_texture = sfTexture_createFromFile(\
    "assets/sprite/main_menu.png", NULL);
    sfSprite_setTexture(game_over->mainmenu_button_sprite, \
    game_over->mainmenu_button_texture, sfTrue);
    sfSprite_setScale(game_over->mainmenu_button_sprite, \
    (sfVector2f){0.6, 0.6});
    sfSprite_setPosition(game_over->mainmenu_button_sprite, \
    (sfVector2f){650, 500});
    sfSprite_setTextureRect(game_over->mainmenu_button_sprite, \
    (sfIntRect){0, 0, 1063, 156});
}

void game_over_init_quit_button(game_over_s *game_over)
{
    game_over->quit_button_sprite = sfSprite_create();
    game_over->quit_button_texture = sfTexture_createFromFile(\
    "assets/sprite/quit.png", NULL);
    sfSprite_setTexture(game_over->quit_button_sprite, \
    game_over->quit_button_texture, sfTrue);
    sfSprite_setScale(game_over->quit_button_sprite, (sfVector2f){0.6, 0.6});
    sfSprite_setPosition(game_over->quit_button_sprite, \
    (sfVector2f){820, 700});
    sfSprite_setTextureRect(game_over->quit_button_sprite, \
    (sfIntRect){0, 0, 434, 217});
}

void game_over_init_title(game_s *game, game_over_s *game_over)
{
    game_over->title = sfText_create();
    sfText_setFont(game_over->title, game->fipps_font);
    sfText_setColor(game_over->title, sfBlack);
    sfText_setOutlineColor(game_over->title, sfRed);
    sfText_setOutlineThickness(game_over->title, 10);
    sfText_setCharacterSize(game_over->title, 70);
    sfText_setPosition(game_over->title, (sfVector2f){720, 200});
    sfText_setString(game_over->title, "You lost");
}

game_over_s *game_over_init(game_over_s *game_over, game_s *game)
{
    game_over = malloc(sizeof(*game_over));
    if (game_over == NULL)
        return (NULL);

    game_over_init_title(game, game_over);
    game_over_init_mainmenu_button(game_over);
    game_over_init_quit_button(game_over);
    return (game_over);
}
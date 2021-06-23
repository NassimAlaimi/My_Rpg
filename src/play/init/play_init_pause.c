/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_init_pause
*/

#include "my.h"

void play_init_pause_logo(play_s *play, sfVector2f pos)
{
    play->pause_logo_sprite = sfSprite_create();
    play->pause_logo_texture = sfTexture_createFromFile(\
    "assets/sprite/pause.png", NULL);
    sfSprite_setTexture(play->pause_logo_sprite, \
    play->pause_logo_texture, sfTrue);
    sfSprite_setScale(play->pause_logo_sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(play->pause_logo_sprite, \
    (sfVector2f){pos.x - 130, pos.y - 220});
}

void play_init_resume_button(play_s *play, sfVector2f pos)
{
    play->pause_resume_sprite = sfSprite_create();
    play->pause_resume_texture = sfTexture_createFromFile(\
    "assets/sprite/resume.png", NULL);
    sfSprite_setTexture(play->pause_resume_sprite, \
    play->pause_resume_texture, sfTrue);
    sfSprite_setScale(play->pause_resume_sprite, (sfVector2f){0.25, 0.25});
    sfSprite_setPosition(play->pause_resume_sprite, \
    (sfVector2f){pos.x - 100, pos.y - 90});
    sfSprite_setTextureRect(play->pause_resume_sprite, \
    (sfIntRect){0, 0, 750, 126});
}

void play_init_mainmenu_button(play_s *play, sfVector2f pos)
{
    play->pause_mainmenu_sprite = sfSprite_create();
    play->pause_mainmenu_texture = sfTexture_createFromFile(\
    "assets/sprite/main_menu.png", NULL);
    sfSprite_setTexture(play->pause_mainmenu_sprite, \
    play->pause_mainmenu_texture, sfTrue);
    sfSprite_setScale(play->pause_mainmenu_sprite, (sfVector2f){0.25, 0.25});
    sfSprite_setPosition(play->pause_mainmenu_sprite, \
    (sfVector2f){pos.x - 130, pos.y - 30});
    sfSprite_setTextureRect(play->pause_mainmenu_sprite, \
    (sfIntRect){0, 0, 1063, 156});
}

void play_init_quit_button(play_s *play, sfVector2f pos)
{
    play->pause_quit_sprite = sfSprite_create();
    play->pause_quit_texture = sfTexture_createFromFile(\
    "assets/sprite/quit.png", NULL);
    sfSprite_setTexture(play->pause_quit_sprite, \
    play->pause_quit_texture, sfTrue);
    sfSprite_setScale(play->pause_quit_sprite, (sfVector2f){0.2, 0.2});
    sfSprite_setPosition(play->pause_quit_sprite, \
    (sfVector2f){pos.x - 50, pos.y + 35});
    sfSprite_setTextureRect(play->pause_quit_sprite, \
    (sfIntRect){0, 0, 434, 217});
}

void play_init_pause(play_s *play)
{
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);

    play->pause_bg = sfRectangleShape_create();
    sfRectangleShape_setFillColor(play->pause_bg, (sfColor){0, 0, 0, 150});
    sfRectangleShape_setSize(play->pause_bg, (sfVector2f){1920*3, 1080*3});

    play_init_pause_logo(play, pos);
    play_init_resume_button(play, pos);
    play_init_mainmenu_button(play, pos);
    play_init_quit_button(play, pos);
}
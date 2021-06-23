/*
** EPITECH PROJECT, 2021
** menu_init.c
** File description:
** function to initialize the main menu
*/

#include "my.h"

void menu_init_background(menu_s *menu)
{
    menu->bg_sprite = sfSprite_create();
    menu->bg_texture = \
    sfTexture_createFromFile("assets/sprite/menu_bg.jpg", NULL);
    sfSprite_setTexture(menu->bg_sprite, menu->bg_texture, sfFalse);
    sfSprite_setScale(menu->bg_sprite, (sfVector2f){3, 3});
}

void menu_init_logo(menu_s *menu)
{
    menu->logo_sprite = sfSprite_create();
    menu->logo_texture = \
    sfTexture_createFromFile("assets/sprite/Hebscapists.png", NULL);
    sfSprite_setTexture(menu->logo_sprite, menu->logo_texture, sfFalse);
    sfSprite_setScale(menu->logo_sprite, (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(menu->logo_sprite, (sfVector2f){350, 70});

    menu->arrow_sprite = sfSprite_create();
    menu->arrow_texture = \
    sfTexture_createFromFile("assets/sprite/arrow.png", NULL);
    sfSprite_setTexture(menu->arrow_sprite, menu->arrow_texture, sfFalse);
    sfSprite_setScale(menu->arrow_sprite, (sfVector2f){0.2, 0.2});
    sfSprite_setPosition(menu->arrow_sprite, (sfVector2f){695, 560});
}

void menu_init_buttons(menu_s *menu)
{
    menu->playbutton_sprite = sfSprite_create();
    menu->playbutton_texture = \
    sfTexture_createFromFile("assets/sprite/Play.png", NULL);
    sfSprite_setTexture(menu->playbutton_sprite, \
    menu->playbutton_texture, sfFalse);
    sfSprite_setScale(menu->playbutton_sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(menu->playbutton_sprite, (sfVector2f){835, 560});
    sfSprite_setTextureRect(menu->playbutton_sprite, \
    (sfIntRect){0, 0, 525, 244});

    menu->htpbutton_sprite = sfSprite_create();
    menu->htpbutton_texture = \
    sfTexture_createFromFile("assets/sprite/HowToPlay.png", NULL);
    sfSprite_setTexture(menu->htpbutton_sprite, \
    menu->htpbutton_texture, sfFalse);
    sfSprite_setScale(menu->htpbutton_sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(menu->htpbutton_sprite, (sfVector2f){685, 690});
    sfSprite_setTextureRect(menu->htpbutton_sprite, \
    (sfIntRect){0, 0, 1250, 240});
}

void menu_init_buttons_bis(menu_s *menu)
{
    menu->settingsbutton_sprite = sfSprite_create();
    menu->settingsbutton_texture = \
    sfTexture_createFromFile("assets/sprite/Settings.png", NULL);
    sfSprite_setTexture(menu->settingsbutton_sprite, \
    menu->settingsbutton_texture, sfFalse);
    sfSprite_setScale(menu->settingsbutton_sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(menu->settingsbutton_sprite, (sfVector2f){755, 820});
    sfSprite_setTextureRect(menu->settingsbutton_sprite, \
    (sfIntRect){0, 0, 934, 217});

    menu->quitbutton_sprite = sfSprite_create();
    menu->quitbutton_texture = \
    sfTexture_createFromFile("assets/sprite/quit.png", NULL);
    sfSprite_setTexture(menu->quitbutton_sprite, \
    menu->quitbutton_texture, sfFalse);
    sfSprite_setScale(menu->quitbutton_sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(menu->quitbutton_sprite, (sfVector2f){840, 935});
    sfSprite_setTextureRect(menu->quitbutton_sprite, \
    (sfIntRect){-3, 0, 434, 217});
}

menu_s *menu_init(menu_s *menu)
{
    menu = malloc(sizeof(*menu));
    if (menu == NULL)
        return (NULL);

    menu->bg_clock = sfClock_create();
    menu_init_background(menu);
    menu_init_logo(menu);
    menu_init_buttons(menu);
    menu_init_buttons_bis(menu);

    return (menu);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_draw_box
*/

#include "my.h"

int play_box_dify(play_s *play)
{
    if (play->player->direction == 1)
        return (1);
    if (play->player->direction == 0)
        return (-1);
    return (0);
}

int play_box_difx(play_s *play)
{
    if (play->player->direction == 3)
        return (1);
    if (play->player->direction == 2)
        return (-1);
    return (0);
}

void play_box_obj(play_s *play)
{
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);
    int posx = pos.x;
    int posy = pos.y;
    int difx = play_box_difx(play);
    int dify = play_box_dify(play);
    int x = 0;
    int y = 0;

    while (y != (posy/32) - dify || x != (posx/32) - difx) {
        if (play->walls_int_array[y][x] == 609)
            play->box->box_open++;
        x++;
        if (x == 105) {
            x = 0;
            y++;
        }
    }
    if (play->walls_int_array[y][x] == 609)
        play->box->box_open++;
}

void play_draw_set_box(game_s *game, play_s *play)
{
    int y = 0;

    for (int i = 0; i < 12; i++) {
        if (i > 6)
            y++;
        play_draw_pck(game, play, i, y);
        play_draw_screw(game, play, i, y);
    }
}

void play_draw_box(game_s *game, box_s *box, play_s *play)
{
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);

    if (box->box == true) {
        sfSprite_setPosition(box->box_sprite, (sfVector2f){pos.x - (777*0.6)/2\
            , pos.y - (750*0.6)/2+17});
        sfRenderWindow_drawSprite(game->window, box->box_sprite, NULL);
        box->box_open = 0;
        play_box_obj(play);
        play_draw_set_box(game, play);
        play_check_switch_ib(game, play);
    }
}
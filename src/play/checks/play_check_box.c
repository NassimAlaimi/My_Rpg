/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-cyprien.piron
** File description:
** play_check_box
*/

#include "my.h"

void switch_box_to_inventory(play_s *play, int i)
{
    for (int x = 0; x < 5; x++) {
        if (play->inventory->obj[x].id == 0) {
            play->inventory->obj[x].id = play->box->obj_box[play->box->\
            box_open][i];
            play->box->obj_box[play->box->box_open][i] = 0;
            return;
        }

    }
}

void play_check_switch_ib(game_s *game, play_s *play)
{
    sfVector2i mpos = sfMouse_getPositionRenderWindow(game->window);

    for (int i = 0; i < 12; i++) {
        if (mpos.y >= 408 && mpos.x >= 521 + i * 148 && mpos.y <= 543 && \
        mpos.x <= 657 + i * 148 && sfMouse_isButtonPressed(sfMouseLeft)) {
            switch_box_to_inventory(play, i);
        }
        if (mpos.y >= 556 && mpos.x >= 521 + i * 148 && mpos.y <= 691 && \
        mpos.x <= 657 + i * 148 && sfMouse_isButtonPressed(sfMouseLeft)) {
            switch_box_to_inventory(play, i + 6);
        }
    }
}

int play_check_box_around(play_s *play)
{
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);
    int posx = pos.x;
    int posy = pos.y;
    if (play->walls_int_array[(posy/32)-1][posx/32] == 609 && \
play->player->direction == 1)
        return (1);
    if (play->walls_int_array[(posy/32)+1][posx/32] == 609 && \
play->player->direction == 0)
        return (1);
    if (play->walls_int_array[posy/32][(posx/32)+1] == 609 && \
play->player->direction == 3)
        return (1);
    if (play->walls_int_array[posy/32][(posx/32)-1] == 609 && \
play->player->direction == 2)
        return (1);
    return (0);
}

void play_check_box(play_s *play, box_s *box)
{
    box->box_ms = sfTime_asMilliseconds(sfClock_getElapsedTime(box->box_clock));
    if (sfKeyboard_isKeyPressed(sfKeyE) && play_check_box_around(play) == 1 && \
box->box_ms > 150) {
        if (box->box == true) {
            box->box = false;
        } else {
            box->box = true;
        }
        sfClock_restart(box->box_clock);
    }
}
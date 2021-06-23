/*
** EPITECH PROJECT, 2021
** play_check_player_movement
** File description:
** functions to check for player movements
*/

#include "my.h"

void play_check_player_movement_tmp_0(int tmp, play_s *play, game_s *game)
{
    if (tmp == 0)
        play->player->status = 0;
    sfClock_restart(play->player->player_clock);
    sfView_setCenter(play->view, sfSprite_getPosition\
(play->player->player_sprite));
    sfRenderWindow_setView(game->window, play->view);
}

int play_check_player_zqsd(play_s *play, sfVector2f speed, int tmp, int dir)
{
    play->player->status = 1;
    play->player->direction = dir;
    if (play->player->direction != dir && tmp == 0)
        play_draw_player(play->player);
    if (play->player->direction == dir)
        sfSprite_move(play->player->player_sprite, speed);
    return (tmp+1);
}

void play_check_player_lafonctionpourquecyprienpleurpas(player_s *player)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        player->direction = 1;
    if (sfKeyboard_isKeyPressed(sfKeyS))
        player->direction = 0;
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        player->direction = 2;
    if (sfKeyboard_isKeyPressed(sfKeyD))
        player->direction = 3;
}

void play_check_player_keyboard(play_s *play, game_s *game, sfVector2f pos\
, int tmp)
{
    int y = pos.y / 32;
    int yup = (pos.y + 25) / 32;
    int ydown = (pos.y - 13) / 32;
    int x = pos.x / 32;
    int xleft = (pos.x + 15) / 32;
    int xright = (pos.x - 15) / 32;

    play_check_player_lafonctionpourquecyprienpleurpas(play->player);
    if (sfKeyboard_isKeyPressed(sfKeyZ) && \
play->collision_array[yup - 1][x] == '.')
        tmp = play_check_player_zqsd(play, (sfVector2f){0, -2}, tmp, 1);
    if (sfKeyboard_isKeyPressed(sfKeyS) && \
play->collision_array[ydown + 1][x] == '.')
        tmp = play_check_player_zqsd(play, (sfVector2f){0, 2}, tmp, 0);
    if (sfKeyboard_isKeyPressed(sfKeyQ) && \
play->collision_array[y][xleft - 1] == '.')
        tmp = play_check_player_zqsd(play, (sfVector2f){-2, 0}, tmp, 2);
    if (sfKeyboard_isKeyPressed(sfKeyD) && \
play->collision_array[y][xright + 1] == '.')
        tmp = play_check_player_zqsd(play, (sfVector2f){2, 0}, tmp, 3);
    play_check_player_movement_tmp_0(tmp, play, game);
}

void play_check_player_movement(game_s *game, play_s *play)
{
    sfVector2f pos = sfSprite_getPosition(play->player->player_sprite);
    play->player->sprite_ms = sfTime_asMilliseconds(sfClock_getElapsedTime\
(play->player->sprite_clock));
    play->player->player_ms = sfTime_asMilliseconds(sfClock_getElapsedTime\
(play->player->player_clock));
    if (play->player->player_ms > 10)
        play_check_player_keyboard(play, game, pos, 0);
    if (play->player->sprite_ms > 150 && play->player->status == 1) {
        play_draw_player(play->player);
        sfClock_restart(play->player->sprite_clock);
    } else if (play->player->sprite_ms > 300 && play->player->status == 0) {
        play_draw_player(play->player);
        sfClock_restart(play->player->sprite_clock);
    }
    update_inventory(game, play);
}
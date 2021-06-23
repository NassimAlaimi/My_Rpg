/*
** EPITECH PROJECT, 2021
** play.c
** File description:
** main play function
*/

#include "my.h"

void play_pause_event_check(game_s *game, play_s *play)
{
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtKeyPressed && \
        game->event.key.code == sfKeyEscape && play->pause == true) {
            play->pause = false;
        } else if (game->event.type == sfEvtKeyPressed && \
        game->event.key.code == sfKeyEscape && play->pause == false) {
            play->pause = true;
            play_init_pause(play);
        }
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
    }
}

void play_pause_check(game_s *game, play_s *play)
{
    sfVector2i mpos = sfMouse_getPositionRenderWindow(game->window);

    play_pause_event_check(game, play);
    if (play->pause) {
        play_pause_buttons_check(play, mpos, game);
    }
}

int play(game_s *game)
{
    play_s *play = NULL;

    play = play_init(game, play);
    if (play == NULL)
        return (-1);

    while (sfRenderWindow_isOpen(game->window) && game->scene == 1) {
        sfRenderWindow_clear(game->window, sfBlack);
        play_pause_check(game, play);
        if (!play->pause)
            play_checks(game, play);
        play_draw(game, play);
        sfRenderWindow_display(game->window);
    }
    sfView_setSize(play->view, (sfVector2f){1920, 1080});
    sfView_setCenter(play->view, (sfVector2f){1920 / 2, 1080 / 2});
    sfRenderWindow_setView(game->window, play->view);
    play_dispose(play);
    return (0);
}
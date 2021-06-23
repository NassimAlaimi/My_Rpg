/*
** EPITECH PROJECT, 2021
** game_init.c
** File description:
** function to initialize the game structure
*/

#include "my.h"

void game_sound_init(game_s *game)
{
    game->music_volume = 10;
    game->sound_volume = 10;

    game->music = sfMusic_createFromFile("assets/audio/TheHebscapists.ogg");
    sfMusic_setVolume(game->music, game->music_volume);
    sfMusic_setLoop(game->music, sfTrue);
}

game_s *init_game(game_s *game)
{
    game = malloc(sizeof(*game));
    if (game == NULL)
        return (NULL);

    game->mode = (sfVideoMode){1920, 1080, 32};
    game->window = sfRenderWindow_create(game->mode, "my_rpg", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window, 144);
    game->pause = false;
    game->skin_choice = 0;
    game_sound_init(game);
    game->scene = 0;
    game->fipps_font = sfFont_createFromFile("assets/font/Fipps-Regular.otf");

    return (game);
}
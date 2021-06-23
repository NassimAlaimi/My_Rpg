/*
** EPITECH PROJECT, 2021
** play draw text
** File description:
** draws texts
*/

#include "my.h"

void play_draw_text(game_s *game, play_s *play)
{
    sfVector2f player_pos = sfSprite_getPosition(play->player->player_sprite);

    if (player_pos.x > 1100 && player_pos.x < 1180 && player_pos.y < 790)
        sfRenderWindow_drawSprite(game->window, play->npcs[0].spr_txt, NULL);
    if (player_pos.x > 1600 && player_pos.x < 1750 && player_pos.y > 1950)
        sfRenderWindow_drawSprite(game->window, play->npcs[1].spr_txt, NULL);
}
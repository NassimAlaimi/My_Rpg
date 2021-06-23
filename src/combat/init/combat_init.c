/*
** EPITECH PROJECT, 2021
** init combat scene
** File description:
** initializes the combat scene
*/

#include "my.h"

void combat_init_opponents(combat_s *combat, \
stats_s *player_stats, stats_s *enemy_stats)
{
    combattant_s *plyr = malloc(sizeof(*plyr));
    combattant_s *opponent = malloc(sizeof(*opponent));

    plyr->pos = (sfVector2f){600, 750};
    opponent->pos = (sfVector2f){1200, 750};

    init_combattant(plyr, player_stats, \
    "assets/sprite/character/combat_player.png", "Player");
    init_combattant(opponent, enemy_stats, \
    "assets/sprite/cop.png", "Prison Guard");
    combat->player = plyr;
    combat->opponent = opponent;
}

void combat_init(combat_s *combat, stats_s *player_stats, stats_s *enemy_stats)
{
    combat->bg_sprite = sfSprite_create();
    combat->bg_texture = sfTexture_createFromFile(\
    "assets/sprite/combat_bg.jpg", NULL);
    sfSprite_setTexture(combat->bg_sprite, combat->bg_texture, sfTrue);
    sfSprite_setPosition(combat->bg_sprite, (sfVector2f){0, 0});

    combat->keys_sprite = sfSprite_create();
    combat->keys_texture = sfTexture_createFromFile(\
    "assets/sprite/keys.png", NULL);
    sfSprite_setTexture(combat->keys_sprite, combat->keys_texture, sfTrue);

    combat_init_opponents(combat, player_stats, enemy_stats);
}
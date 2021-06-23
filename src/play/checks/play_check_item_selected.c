/*
** EPITECH PROJECT, 2021
** play check item selected
** File description:
** checks events for item selection of inventory
*/

#include "my.h"

void play_check_item_selcted(play_s *play)
{
    sfVector2f pos = play->inventory->inv_pos;

    if (sfKeyboard_isKeyPressed(sfKeyNum1))
        sfSprite_setPosition(play->inventory->selected_sprite, pos);
    if (sfKeyboard_isKeyPressed(sfKeyNum2))
        sfSprite_setPosition(play->inventory->selected_sprite, (sfVector2f)\
        {pos.x + 60, pos.y});
    if (sfKeyboard_isKeyPressed(sfKeyNum3))
        sfSprite_setPosition(play->inventory->selected_sprite, (sfVector2f)\
        {pos.x + 121, pos.y});
    if (sfKeyboard_isKeyPressed(sfKeyNum4))
        sfSprite_setPosition(play->inventory->selected_sprite, (sfVector2f)\
        {pos.x + 181, pos.y});
    if (sfKeyboard_isKeyPressed(sfKeyNum5))
        sfSprite_setPosition(play->inventory->selected_sprite, (sfVector2f)\
        {pos.x + 242, pos.y});
    if (sfKeyboard_isKeyPressed(sfKeyNum6))
        sfSprite_setPosition(play->inventory->selected_sprite, (sfVector2f)\
        {pos.x + 303, pos.y});
}
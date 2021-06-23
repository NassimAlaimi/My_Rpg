/*
** EPITECH PROJECT, 2021
** play_dispose.c
** File description:
** function to free and destroy everything from play
*/

#include "my.h"

void play_dispose(play_s *play)
{
    inventory_dispose(play->inventory);
    sfView_destroy(play->view);
    free(play);
}
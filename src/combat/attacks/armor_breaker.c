/*
** EPITECH PROJECT, 2021
** armor breaker
** File description:
** attack that breaks armor for two turns
*/

#include "my.h"

void armor_breaker(combat_s *combat, int *armor_breaker_left)
{
    combat->opponent->stats->def -= 2;
    *armor_breaker_left = 2;
}
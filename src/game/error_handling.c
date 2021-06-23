/*
** EPITECH PROJECT, 2021
** error_handling.c
** File description:
** function to handle errors in my_rpg
*/

#include "my.h"

int error_handling(int ac)
{
    if (ac != 1)
        return (print_error("Error: No arguments needed\n"));
    return (0);
}
/*
** EPITECH PROJECT, 2021
** my_json_parser.c
** File description:
** starts with a number, separates by comma and a space (", "), NULL terminated
*/

#include "my.h"

int get_current_value(char *buffer, int *i)
{
    int tmp = 0;

    while (buffer[*i] >= '0' && buffer[*i] <= '9') {
        tmp = (tmp * 10) + (buffer[*i] - '0');
        (*i)++;
    }
    return (tmp);
}

int **my_json_parser(int **array, char *buffer, int width)
{
    int tmp = 0;
    int current_width = 0;
    int current_height = 0;

    for (int i = 0; buffer[i] != '\0';) {
        if (buffer[i] >= '0' && buffer[i] <= '9') {
            tmp = get_current_value(buffer, &i);
            array[current_height][current_width] = tmp;
            current_width++;
        }
        if (current_width == width) {
            current_width = 0;
            current_height++;
        }
        if (buffer[i] == ',')
            i += 2;
    }
    return (array);
}
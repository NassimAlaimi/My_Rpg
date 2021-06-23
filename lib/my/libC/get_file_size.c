/*
** EPITECH PROJECT, 2021
** get_file_size.c
** File description:
** function to get file size
*/

#include "my.h"

int get_file_size(char *str)
{
    char *c = malloc(sizeof(char) * 1);
    int count = 0;
    int fd = open(str, O_RDONLY);

    while (read(fd, c, 1) == 1)
        count++;
    close(fd);
    return (count);
}
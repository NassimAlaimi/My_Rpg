/*
** EPITECH PROJECT, 2021
** victory_init_particles.c
** File description:
** function to initialize particles
*/

#include "my.h"

sfVector2f set_particle_velocity(void)
{
    float r1 = ((float) rand() / (float)(RAND_MAX)) * 4;
    float r2 = ((float) rand() / (float)(RAND_MAX)) * 4;
    float x = ((float)rand() / (float)(RAND_MAX)) * r1 - r1 / 2;
    float y = ((float)rand() / (float)(RAND_MAX)) * r2 - r2 / 2;

    if (y == 0)
        y++;
    if (x == 0)
        x++;
    return ((sfVector2f){x, y});
}

void set_pixel_color(victory_s *victory, int x)
{
    sfColor color = {0, 0, 0, 0};

    color.r = rand() % 255;
    color.g = rand() % 255;
    color.b = rand() % 255;
    color.a = (rand() % 255) + 100;
    sfRectangleShape_setFillColor(victory->particles[x], color);
}

void victory_init_particles(victory_s *victory)
{
    sfVector2f pos = {1920 / 2, 1080 / 2};
    victory->particles = malloc(sizeof(sfRectangleShape*) * (100 + 1));
    victory->velocities = malloc(sizeof(sfVector2f) * 100);

    for (int x = 0; x < 100; x++) {
        victory->particles[x] = sfRectangleShape_create();

        sfRectangleShape_setSize(victory->particles[x], (sfVector2f){6, 6});
        sfRectangleShape_setPosition(victory->particles[x], pos);
        set_pixel_color(victory, x);
        victory->velocities[x] = set_particle_velocity();
    }
    victory->particles[100] = NULL;
}
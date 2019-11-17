/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** i hope i'll be usefull this time
*/

#include <stdio.h>
#include <stdlib.h>

void my_print_coordinates(float x1, float y1, float z1, float vx, float vy, float vz, int n)
{
    float xn = x1 + (n * vx);
    float yn = y1 + (n * vy);
    float zn = z1 + (n * vz);

    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2f, %.2f, %.2f)\n", xn, yn, zn);
}

void my_print_vector(float x0, float y0, float z0, float x1, float y1, float z1, int n)
{
    float vx = x1 - x0;
    float vy = y1 - y0;
    float vz = z1 - z0;

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", vx, vy, vz);
    my_print_coordinates(x1, y1, z1, vx, vy, vz, n);
}

void pong(char *x0, char *y0, char *z0, char *x1, char *y1, char *z1, char *n)
{
    int fn = atoi(n);
    float fx0 = atof(x0);
    float fy0 = atof(y0);
    float fz0 = atof(z0);
    float fx1 = atof(x1);
    float fy1 = atof(y1);
    float fz1 = atof(z1);
    my_print_vector(fx0, fy0, fz0, fx1, fy1, fz1, fn);
}

int main (int ac, char **av)
{
    if (ac == 8) {
        pong (av[1], av[2], av[3], av[4], av[5], av[6], av[7]);
            return (0);
    }
    return (84);
}

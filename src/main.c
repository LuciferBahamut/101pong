/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** 101pong
*/

#include "my.h"

int main (int ac, char **av)
{
    if (ac == 8) {
        pong (av[1], av[2], av[3], av[4], av[5], av[6], av[7]);
        return (0);
    }
    return (84);
}

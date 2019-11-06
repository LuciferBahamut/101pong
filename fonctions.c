/*
** EPITECH PROJECT, 2019
** fonctions
** File description:
** no comment
*/
#include <unistd.h>
void my_putchar(char n)
{
    write(1, &n, 1);
}

void my_putstr(char *str)
{
    for (int n = 0; str[n] != '\0'; n++)
        my_putchar(str[n]);
}

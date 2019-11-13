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

int my_atoi(char *str)
{
    int nb = 0;
    int n = 0;
    while (str[n] != '\0') {
        if (str[n] >= '0' && str[n] <= '9') {
            nb *= 10;
            nb += str[n] - '0';
        } else {
            return (nb);
        }
        n++;
    }
    return (nb);
}
int my_floatoi1(char *str)
{
    int nb = 0;
    int n = 0;
    while (str[n] != ',') {
        if (str[n] >= '0' && str[n] <= '9') {
            nb *= 10;
            nb += str[n] - '0';
        } else {
            return(nb)
        }
        n++;
    }
    return (nb);
}
float my_floatoi2(char *str)
{
    float nb = 0;
    int n;
    for (n = 0; str[n] != ','; n++) {
    }
    n++;
    while (str[n] != '\0') {
        if (str[n] >='0' && str[n] <= '9') {
            nb / 10;
            nb += str[n] - '0';
        } else {
            return (nb);
        }
    }
}
float my_floatoi(char *str)
{
    float a = my_floatoi1(*str);
    float b = my_floatoi2(*str);
    a += b;
    return (a);
}

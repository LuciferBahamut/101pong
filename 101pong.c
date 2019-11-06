/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** why 101?
*/
void my_print_coordinates(float x0, float y0, float z0, float vx, float vy, float vz, int n)
{
    float xn = x0 + (n * vx);
    float yn = y0 + (n * vy);
    float zn = z0 + (n * vz);
}

void my_print_vector(float x0, float y0, float z0, float x1, float y1, float z1)
{
    float vx = x1 - x0;
    float vy = y1 - y0;
    float vz = z1 - z0;
    my_print_coordinates(x0, y0, z0, vx, vy, vz);
}

void pong(char x0, char y0, char z0, char x1, char y1, char z1, char n)
{
    
}

int main (int ac, char **av)
{
    if (ac == 8) {
        pong (av[1], av[2], av[3], av[4], av[5], av[6], av[7])
            return (0);
    }
    return (84);
}

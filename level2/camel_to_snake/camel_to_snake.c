#include <unistd.h>
// #include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    while (av[1][i])
    {
        if (av[1][i] >= 'A' && av[1][i] <= 'Z')
        {
            write(1, "_", 1);
            ft_putchar(av[1][i] + 32);
        }
        else
            ft_putchar(av[1][i]);
        i++;
    }
    write(1, "\n", 1);
}

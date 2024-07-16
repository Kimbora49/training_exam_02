#include <unistd.h>

int ft_is_present(char letter, char *tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        if (tab[i] == letter)
            return (1);
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int     i;
    int     j;
    char    tab[256] = {0};

    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    j = 0;
    i = 0;
    while (av[1][i])
    {
        if (!ft_is_present(av[1][i], tab))
        {
            tab[j] = av[1][i];
            j++;
            write(1, &av[1][i], 1);
        }
        i++;
    }
    i = 0;
    while (av[2][i])
    {
        if (!ft_is_present(av[2][i], tab))
        {
            tab[j] = av[2][i];
            j++;
            write(1, &av[2][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}
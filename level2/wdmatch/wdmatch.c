#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (0);
}

int main(int ac, char **av)
{
    int i;
    int compteur;

    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    compteur = 0;
    while (av[1][i])
    {
        while (*av[2] && *av[2] != av[1][i])
            av[2]++;
        if (*av[2] != '\0')
            compteur++;
        i++;
    }
    if (compteur >= ft_strlen(av[1]))
    {
        i = 0;
        while (av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
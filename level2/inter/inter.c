#include <unistd.h>

int ft_strchr(char letter, char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == letter)
            return (1);
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i;
    int j;
    char printed[256];

    printed[0] = '\0';
    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    j = 0;
    while (av[1][i])
    {
        if (ft_strchr(av[1][i], av[2]) && !ft_strchr(av[1][i], printed))
        {
            printed[j] = av[1][i];
            j++;
            write(1, &av[1][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}
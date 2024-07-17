#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int flag;

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    flag = 0;
    while (av[1][i])
    {
        while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
            i++;
        if ((av[1][i] != ' ' && av[1][i] != '\t') && av[1][i])
        {
            if (flag == 1)
                write(1, "   ", 3);
            flag = 1;
        }
        while ((av[1][i] != ' ' && av[1][i] != '\t') && av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
     write(1, "\n", 1);
}
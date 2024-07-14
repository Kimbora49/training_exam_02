#include<unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    while (av[1][i])
    {
        if (av[1][i] >= 65  && av[1][i] <= 90) 
        {
            j = av[1][i] - 64;
            while (j > 0)
            {
                write (1, &av[1][i], 1);
                j--;
            }
        }
        if (av[1][i] >= 97  && av[1][i] <= 122)
        {
            j = av[1][i] - 96;
            while (j > 0)
            {
                write (1, &av[1][i], 1);
                j--;
            }
        }
        else
            write (1, &av[1][i], 1);
        i++;
    }
}
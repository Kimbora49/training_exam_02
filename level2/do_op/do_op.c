#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb < 10)
        ft_putchar(nb + 48);
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + 48);
    }
}

int main(int ac, char ** av)
{
    int nb1;
    int nb2;

    if (ac != 4 || av[2][1] != '\0')
    {
        write(1, "\n", 1);
        return (0);
    }
    nb1 = atoi(av[1]);
    nb2 = atoi(av[3]);
    if (av[2][0] == '+')
        ft_putnbr(nb1 + nb2);
    else if (av[2][0] == '-')
        ft_putnbr(nb1 - nb2);
    else if (av[2][0] == '*')
        ft_putnbr(nb1 * nb2);
    else if (av[2][0] == '/')
        ft_putnbr(nb1 / nb2);
    else if (av[2][0] == '%')
        ft_putnbr(nb1 % nb2);
    write(1, "\n", 1);
}

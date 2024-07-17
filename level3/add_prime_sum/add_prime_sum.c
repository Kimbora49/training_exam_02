#include <unistd.h>

int	ft_atoi(const char *str)
{
    int i;
    int nb;
    int signe;

    i = 0;
    nb = 0;
    signe = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-')
    {
        signe = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    return (nb * signe);
}

int ft_is_prime(int nb)
{
    int i;

	i = 2;
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	else
		return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putposnbr(int nb)
{
    if (nb < 10)
        ft_putchar(nb + 48);
    else
    {
        ft_putposnbr(nb / 10);
        ft_putchar(nb % 10 + 48);
    }
}

int main(int ac, char **av)
{
    int arg1;
    int total;

    if (ac != 2 || ft_atoi(av[1]) <= 0)
    {
        write(1, "0\n", 2);
        return (0);
    }
    arg1 = ft_atoi(av[1]);
    total = 0;
    while (arg1 > 1)
    {
        if (ft_is_prime(arg1))
            total = total + arg1;
        arg1--;
    }
    ft_putposnbr(total);
    write(1, "\n", 1);
}

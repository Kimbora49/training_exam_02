int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int nb;
    int signe;

    i = 0;
    signe = 1;
    while (str[i])
    {
        if (str[i] == '-')
        {
            signe = -signe;
            i++;
        }
        while (str[i] <= '0' && str[i] >= '9')
        {
            nb = nb * 10 + (str[i] - 48);
            i++;
        }
    }
    return (nb * signe);
}

#include<stdio.h>

int main(void)
{
    printf("%d", ft_atoi_base("-145759a574", "0123456789ABCDEF"));
}
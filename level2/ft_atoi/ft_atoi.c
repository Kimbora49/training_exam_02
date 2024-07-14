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

// #include<stdlib.h>
// #include<stdio.h>

// int main(void)
// {
//     printf("%d\n", atoi("-58785168425415475a78"));
//     printf("%d", ft_atoi("-58785168425415475a78"));
// }
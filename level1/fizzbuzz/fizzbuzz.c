#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_miniputnbr(int i)
{
    if (i < 10)
        ft_putchar(i + 48);
    else
    {
        ft_putchar(i / 10 + 48);
        ft_putchar(i % 10 + 48);
    }
}

int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0)
            write(1, "fizz", 4);
        if (i % 5 == 0)
            write(1, "buzz", 4);
        if (i % 3 != 0 && i % 5 != 0)
            ft_miniputnbr(i);
        write(1, "\n", 1);
        i++;
    }
}
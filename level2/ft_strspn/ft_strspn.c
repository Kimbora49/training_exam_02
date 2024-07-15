#include <aio.h>

int ft_ispresent(char letter, const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (letter == str[i])
            return (1);
        i++;
    }
    return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;
    
    i = 0;
    while (s[i])
    {
        if (!ft_ispresent(s[i], accept))
            return (i);
        i++;
    }
    return (i);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("%lu", ft_strspn("Salut !", "tu!laS"));
// }
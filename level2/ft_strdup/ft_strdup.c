#include <stdlib.h>

int ft_strlen(char  *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;

    dest = malloc((ft_strlen(src) + 1) * sizeof(char));
    if (!dest)
        return NULL;
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%s", ft_strdup(""));
// }
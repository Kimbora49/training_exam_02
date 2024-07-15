char    *ft_strrev(char *str)
{
    int     len;
    int     j;
    char    tmp;

    len = 0;
    while(str[len])
        len++;
    len--;
    j = 0;
    while(j < len / 2)
    {
        tmp = str[j];
        str[j] = str[len];
        str[len] = tmp;
        len--;
        j++;
    }
    return(str);
}

// #include <stdio.h>

// int main(void)
// {
//     char    str[50] = "Salut !";

//     printf("%s", ft_strrev(str));
// }

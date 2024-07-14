#include <aio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    int    j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (reject[j] == s[i])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("%lu\n", strcspn("salutations a tous", ""));
//     printf("%lu", ft_strcspn("salutations a tous", ""));
// }

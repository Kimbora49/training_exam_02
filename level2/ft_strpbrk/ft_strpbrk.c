char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int    j;

    i = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s2[j] == s1[i])
                return ((char *)s1 + i);
            j++;
        }
        i++;
    }
    return ("(null)");
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("%s\n", strpbrk("salut", "a"));
//     printf("%s", ft_strpbrk("salut", "a"));
// }

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int max;
    
    if (len == 0)
        return (0);
    i = 0;
    max = tab[i];
    i++;
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}
// #include <stdio.h>

// int main(void)
// {
//     int tab[5] = {-10, -15, -3, -15, -9};

//     printf("%d", max(tab, 5));
// }
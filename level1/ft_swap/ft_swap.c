void	ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

// #include<stdio.h>

// int main(void)
// {
//     int a = 5;
//     int b = 3;

//     printf("a : %d\nb : %d\n\n", a, b);
//     ft_swap(&a, &b);
//     printf("a : %d\nb : %d\n", a, b);
// }
#include "libft.h"

static int count_size(int n)
{
    int c;

    c = 1;
    if (n == -2147483648)
        return 12;
    if (n < 0)
    {
        c++;
        n *= -1;
    }
    while (n / 10)
    {
        c++;
        n /= 10;
    }
    return c;
}

char *ft_itoa(int n)
{
    char *p;
    int c;

    c = count_size(n);
    p = ft_calloc(c + 1, 1);
    if (p == 0)
        return 0;
    if (n == -2147483648)
        ft_memcpy(p, "-2147483648", 12);
    else
    {
        if (n < 0)
        {
            p[0] = '-';
            n *= -1;
        }
        while (n / 10)
        {
            p[--c] = '0' + n % 10;
            n /= 10;
        }
        p[c - 1] = '0' + n;
    }
    return p;
}
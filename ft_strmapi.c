#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *p;
    unsigned int i;

    i = -1;
    p = ft_calloc(ft_strlen(s) + 1, 1);
    if (p == 0)
        return 0;
    while (s[++i])
        p[i] = f(i, (char)s[i]);
    return p;
}
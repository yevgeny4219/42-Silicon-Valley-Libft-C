#include "libft.h"
#include <stdio.h>

void        *ft_calloc(size_t num, size_t size)
{
    void *tmp;
    size_t res;

    res = num * size;
    if (!(tmp = (void *)malloc(res)))
        return (NULL);
    ft_memset(tmp, 0, res);
    return (tmp);
}
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *tmp;
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    if (s == NULL)
        return (NULL);
    if(!(tmp = ft_calloc((len + 1), sizeof(char))))
        return (NULL);
    while (s[i] != '\0' && count <= len)
    {
        if (i >= start)
        {
            tmp[count] = s[i];
            count++;
        }
        i++;
    }
    tmp[len] = '\0';
    return (tmp);
}
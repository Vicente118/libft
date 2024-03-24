#include "libft.h"

char        *ft_strdup(const char *source)
{
    char    *dest;
    size_t     i;

    i = 0;
    dest = (char *) malloc(ft_strlen((char *) source) * sizeof(char) + 1);
    if (!dest)
        return (NULL);
    while (source[i])
    {
        *(dest + i) = *(char *)(source + i);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
/*
int main (void)
{
    const char *src = "Je suis un humain";
    printf("%s", ft_strdup(src));
    return (0);
}
*/
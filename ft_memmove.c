#include "libft.h"

void    *ft_memmove(void *destination, const void *source, size_t size)
{
    size_t     i;
    unsigned char   *dest;
    unsigned char   *src;

    dest =(unsigned char *) destination;
    src = (unsigned char *) source;
    if (!destination || !source)
        return (NULL);
    i = 0;
    if (dest > src)
    {
        while (size-- > 0)
            dest[size] = src[size];
    }
    else
    {
        while (i < size)
        {
            dest[i] = src[i];
            i++;
        }
    }
    return (dest);
}
/*
int main (void)
{
    char    str[40] = "je suis un humain";
    char    *dest = ft_memmove(str + 2, str, sizeof(char) * 5);
    printf("%s", dest);
    return (0);
}
*/
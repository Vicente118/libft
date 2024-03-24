#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t size)
{
    unsigned char *buffer;

    buffer = (unsigned char *) str;
    while (size--)
    {
        if (*buffer == (unsigned char) c)
            return (buffer);
        buffer++;
    }
    return (NULL);
}
/*
int main(void)
{
    const char str[50] = "Bonjour je suis un humain";
    int c = 115;
    printf("%s", ft_memchr(str, c, 19));
    return (0);
}
*/
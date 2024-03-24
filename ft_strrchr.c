#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    unsigned char *buffer;
    int i;

    i = 0;
    if (!str)
        return (NULL);
    while (*str)
    {
        if (*str == (char) c)
        {
            buffer = ((unsigned char *) str);
            i = 1;
        }
        str++;
    }
    if (i == 1)
        return (buffer);
    return (NULL);
}
/*
int main(void)
{
    const char *str = "Bonjour je suis un humain";
    int c = 115;
    printf("%s", ft_strrchr(str, c));
    return (0);
}
*/
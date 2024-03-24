#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    if (!str)
        return (NULL);
    while (*str)
    {
        if (*str == (char) c)
        {
            return ((unsigned char *) str);
        }
        str++;
    }
    return (NULL);
}
/*
int main(void)
{
    const char *str = "Bonjour je suis un humain";
    int c = 111;
    printf("%s", ft_strchr(str, c));
    return (0);
}
*/
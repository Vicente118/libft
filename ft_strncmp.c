#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    if (!str1 || !str2)
        return (0);
    i = 1;
    while (*str1 && (*str1 == *str2) && i < n)
    {
        str1++;
        str2++;
        i++;
    }
    return (*str1 - *str2);
}
/*
int main(void)
{
    const char *str1 = "Bonjour";
    const char *str2 = "Bonsoir";
    printf("%d", ft_strncmp(str1, str2, 3));
    return (0);
}
*/
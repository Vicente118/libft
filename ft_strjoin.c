#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char        *result;
    size_t      len;
    size_t      i;

    i = 0;
    len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
    result = malloc((len) * sizeof(char));
    if (!s1 || !s2 || !result)
        return (NULL);
    while (i < len)
    {
        if (i < ft_strlen((char *)s1))
            result[i] = *(char *)(s1 + i);
        if (i >= ft_strlen((char *)s1))
            result[i] = *(char *)(s2 + i - ft_strlen((char *)s1));
        i++;
    }
    return (result);
}
/*
int main(void)
{
    char const *s1 = "jaziotj^z";
    char const *s2 = "";
    printf("%s", ft_strjoin(s1,s2));
    return (0);
}
*/
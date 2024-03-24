#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  slen;
    size_t  i;

    slen = ft_strlen((char *) s);
    str = malloc(sizeof(char) * slen);
    i = 0;
    if (!str || !s)
        return (NULL);
    while (*s && i < len && start < slen)
    {
        str[i] = *(char *)(s + start);
        i++;
        start++;
    }
    return (str); 
}
/*
int main(void)
{
    char const *s = "Je suis un humain";
    unsigned int start = 3;
    size_t len = 188;
    printf("%s", ft_substr(s,start,len));
    return (0);
}
*/
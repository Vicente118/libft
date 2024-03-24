#include "libft.h"

static size_t   count_char(char const *s1, char const *set)
{
    char    *str1;
    char    *str2;
    size_t  i;

    str1 = (char *) s1;
    i = ft_strlen(str1);
    while (*str1)
    {
        str2 = (char *) set;
        while (*str2)
        {
            if (*str1 == *str2)
            {
                i--;
                break;
            }
            str2++;
        }
        str1++;
    }
    
    return (i);
}

static int      check_char(char c, char const *set)
{
    while (*set)
    {
        if (c == *set)
        {
            return (0);
        }
        set++;
    }
    return (1);
}

char        *ft_strtrim(char const *s1, char const *set)
{
    char    *new_str;
    char    *str1;
    size_t  i;

    new_str = malloc(count_char(s1, set) * sizeof(char) + 1);
    str1 = (char *) s1;
    i = 0;
    if (!s1 || !set || !new_str)
        return (NULL);
    while (*str1)
    {
        if (check_char(*str1, set) == 1)
        {
            new_str[i] = *str1;
            i++;
        }
        str1++;
    }
    new_str[i] = '\0';
    return(new_str);
}
/*
int main(void)
{
    char const *s1 = "Je suis un! humain";
    char const *s2 = "!Jsn";
    printf("%s", ft_strtrim(s1,s2));
    return (0);
}
*/
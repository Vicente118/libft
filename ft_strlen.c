#include "libft.h"

size_t ft_strlen(char *str)
{
    size_t     count;

    count = 0;
    if (str == NULL)
        return (0);
    while (str[count])
        count++;
    return (count);
}
/*
int main(void)
{
    printf("%d", ft_strlen(NULL));
    return (0);
}
*/
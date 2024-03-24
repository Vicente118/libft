#include "libft.h"

void    ft_bzero(void *ptr, size_t count)
{
    size_t     i;

    i = 0;
    while (i < count)
    {
        *(unsigned char *)(ptr + i) = 0;
        i++;
    }
}
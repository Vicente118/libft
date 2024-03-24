#include "libft.h"

void    *ft_calloc(size_t n, size_t size)
{
    void    *ptr;
    int     i;
    
    i = 0;
    ptr = malloc(n * size);
    if (!ptr)
        return (NULL);
    while (i < n)
    {
        *(int *)(ptr + i) = 0;
        i++;
    }
    return (ptr);
}
/*
int main(void)
{
    int *ptr = calloc(10, sizeof(int));
    printf("%d %d %d %d" , ptr[0], ptr[1], ptr[4], ptr[8]);
    return (0);
}
*/
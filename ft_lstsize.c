#include "libft.h"

int ft_lst_size(t_list *lst)
{
    int     i;

    i = 1;
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}
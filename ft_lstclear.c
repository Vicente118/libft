#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *element;
    t_list  *tmp;

    if (!lst || !del)
        return ;

    element = *lst;
    while (element)
    {
        tmp = element;
        element = element->next;
        del(tmp->content);
        free(tmp);
    }
    *lst = NULL;
}
#include "libft.h"

t_list		*ft_lstnew(void *content)
{
    t_list  *element;

    element = malloc(sizeof(t_list));
    if (!content || !element)
        return (NULL);
    element->content = conten;
    element->next = NULL;
    return (element);
}
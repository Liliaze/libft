#include "includes/libft.h"

t_list *ft_lstreverse(t_list *lst)
{
    t_list  *prev;
    t_list  *current;
    t_list  *next;
    
    prev = NULL;
    current = lst;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    lst = prev;
    return (lst);
}
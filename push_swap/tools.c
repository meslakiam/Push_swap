#include "push_swap.h"

int	ft_memcmper(void *s1,void *s2)
{
	const unsigned char	*cmp1;
	const unsigned char	*cmp2;

	cmp1 = (const unsigned char *)s1;
	cmp2 = (const unsigned char *)s2;

	while (*cmp1 || *cmp2)
	{
		if (*cmp1 != *cmp2)
			return (*cmp1 - *cmp2);
		cmp1++;
		cmp2++;
	}
	return (0);
}


int	ft_strcmp(char *s1,char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	while (*str1 || *str2)
	{
		if (*str1 != *str2)
		{
			if (*str1 < *str2)
				return (-1);
			else
				return (1);
		}
		str1++;
		str2++;
	}
	return (0);
}

void	lstadd_back(a_list **lst, a_list *new)
{
	a_list	*last;

	if (!new || !lst)
		return ;
	last = lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}


a_list	*lstnew(int data)
{
	a_list	*elem;

	elem = malloc(sizeof(a_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}



a_list	*lstlast(a_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	lstdelone(a_list *lst)
{
	if (!lst)
		return ;
	free(lst);
}
void	lstclear(a_list **lst)
{
	a_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		(*lst) = tmp;
	}
	*lst = NULL;
}

int	lstsize(a_list *lst)
{
	int		i;
	a_list	*tmp;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:14:01 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 18:54:30 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	lstadd_back_bonus(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	last = lstlast_bonus(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}

void	lstclear_bonus(t_list **lst)
{
	t_list	*tmp;

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

t_list	*lstlast_bonus(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

t_list	*lstnew_bonus(int data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	lstadd_front_bonus(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

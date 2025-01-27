/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:33 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 22:03:33 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*prev_last(t_list *head)
{
	t_list	*pr_last;
	t_list	*tmp;

	tmp = NULL;
	pr_last = NULL;
	if (!head)
		return (NULL);
	while (head)
	{
		tmp = head;
		if (tmp->next == NULL)
			return (NULL);
		if ((tmp->next)->next == NULL)
		{
			pr_last = head;
			return (pr_last);
		}
		head = head->next;
	}
	return (NULL);
}

void	del_last(t_list **stack)
{
	t_list	*pre_last;
	t_list	*last;

	last = lstlast(*stack);
	if (!last)
		return ;
	pre_last = prev_last(*stack);
	if (!pre_last)
	{
		free(*stack);
		return ;
	}
	free(last);
	pre_last->next = NULL;
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	free_strings(char **ptr, int i)
{
	while (ptr[i] != NULL)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return ;
}

int	lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:52:00 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 18:53:29 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_strings_bonus(char **ptr, int i)
{
	while (ptr[i] != NULL)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return ;
}

t_list	*prev_last_bonus(t_list *head)
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

void	del_last_bonus(t_list **stack)
{
	t_list	*pre_last;
	t_list	*last;

	last = lstlast_bonus(*stack);
	if (!last)
		return ;
	pre_last = prev_last_bonus(*stack);
	if (!pre_last)
	{
		free(*stack);
		return ;
	}
	free(last);
	pre_last->next = NULL;
}

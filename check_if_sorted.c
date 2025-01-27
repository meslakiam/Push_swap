/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 23:47:27 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 21:46:17 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_if_sorted(t_list **stack_a)
{
	t_list	*head;

	head = *stack_a;
	while (head)
	{
		if (!(head->next))
			break ;
		if (head->data > (head->next)->data)
			break ;
		head = head->next;
	}
	if (head->next == NULL)
	{
		lstclear(stack_a);
		exit(0);
	}
}

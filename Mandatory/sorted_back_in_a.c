/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_back_in_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:10:08 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 22:03:50 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_list(t_list **stack)
{
	int		i;
	t_list	*head;

	head = *stack;
	i = 0;
	while (head)
	{
		head->index = i;
		i++;
		head = head->next;
	}
}

int	the_largest(t_list *stack)
{
	int	index;
	int	num;

	index = 0;
	num = stack->data;
	while (stack)
	{
		if (!(stack->next))
			break ;
		if (num < (stack->next)->data)
		{
			index = (stack->next)->index;
			num = (stack->next)->data;
		}
		stack = stack->next;
	}
	return (index);
}

void	move_to_top(t_list **stack, int index, int check)
{
	t_list	*node;

	node = *stack;
	while (node->index != index)
		node = node->next;
	while ((*stack) != node)
	{
		if (check == 1 || check == 2)
		{
			if (check == 1)
				rb(stack);
			else if (check == 2)
				rrb(stack);
		}
		if (check == 3 || check == 4)
		{
			if (check == 3)
				ra(stack);
			else if (check == 4)
				rra(stack);
		}
	}
}

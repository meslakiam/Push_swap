/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_range_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:51:35 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 22:03:58 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	the_smaller(t_list *stack)
{
	int	index;
	int	num;

	index = 0;
	num = stack->data;
	while (stack)
	{
		if (!(stack->next))
			break ;
		if (num > (stack->next)->data)
		{
			index = (stack->next)->index;
			num = (stack->next)->data;
		}
		stack = stack->next;
	}
	return (index);
}

void	sorting_2(t_list **stack_a)
{
	int	first;
	int	second;

	if (lstsize(*stack_a) != 2)
		return ;
	first = (*stack_a)->data;
	second = ((*stack_a)->next)->data;
	if (first > second)
		sa(stack_a);
}

void	sorting_3(t_list **stack_a)
{
	int	first;
	int	second;
	int	last;

	if (lstsize(*stack_a) != 3)
		return ;
	first = (*stack_a)->data;
	second = ((*stack_a)->next)->data;
	last = (((*stack_a)->next)->next)->data;
	if (first > second && first > last)
		ra(stack_a);
	else if (second > first && second > last)
		rra(stack_a);
	first = (*stack_a)->data;
	second = ((*stack_a)->next)->data;
	last = (((*stack_a)->next)->next)->data;
	if (first > second)
		sa(stack_a);
}

void	sorting_4(t_list **stack_a, t_list **stack_b)
{
	int	small_index;

	small_index = 0;
	(void)stack_b;
	if (lstsize(*stack_a) != 4)
		return ;
	index_list(stack_a);
	small_index = the_smaller(*stack_a);
	if (small_index <= lstsize(*stack_a) / 2)
		move_to_top(stack_a, small_index, 3);
	else if (small_index > lstsize(*stack_a) / 2)
		move_to_top(stack_a, small_index, 4);
	pb(stack_b, stack_a);
	sorting_3(stack_a);
	pa(stack_a, stack_b);
}

void	sorting_5(t_list **stack_a, t_list **stack_b)
{
	int	small_index;

	small_index = 0;
	(void)stack_b;
	if (lstsize(*stack_a) != 5)
		return ;
	index_list(stack_a);
	small_index = the_smaller(*stack_a);
	if (small_index <= lstsize(*stack_a) / 2)
		move_to_top(stack_a, small_index, 3);
	else if (small_index > lstsize(*stack_a) / 2)
		move_to_top(stack_a, small_index, 4);
	pb(stack_b, stack_a);
	sorting_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:49:30 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 22:03:44 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*tmp;

	tmp = NULL;
	if (!stack_a || !(*stack_a) || !((*stack_a)->next))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	t_list	*tmp;

	tmp = NULL;
	if (!stack_b || !(*stack_b) || !((*stack_b)->next))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	write(1, "sb\n", 3);
}

void	bouth_s(t_list **stack)
{
	t_list	*tmp;

	tmp = NULL;
	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	bouth_s(stack_a);
	bouth_s(stack_b);
	write(1, "ss\n", 3);
}

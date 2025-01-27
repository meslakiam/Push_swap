/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:11:58 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 22:04:19 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*pr_last;
	t_list	*tmp;

	pr_last = NULL;
	tmp = NULL;
	last = NULL;
	if (!stack_a || !(*stack_a))
		return ;
	last = lstlast(*stack_a);
	pr_last = prev_last(*stack_a);
	if (!pr_last)
		return ;
	tmp = *stack_a;
	*stack_a = pr_last->next;
	last->next = tmp;
	pr_last->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*pr_last;
	t_list	*tmp;

	pr_last = NULL;
	tmp = NULL;
	last = NULL;
	if (!stack_b || !(*stack_b))
		return ;
	last = lstlast(*stack_b);
	pr_last = prev_last(*stack_b);
	if (!pr_last)
		return ;
	tmp = *stack_b;
	*stack_b = pr_last->next;
	last->next = tmp;
	pr_last->next = NULL;
	write(1, "rrb\n", 4);
}

void	bouth_rr(t_list **stack)
{
	t_list	*last;
	t_list	*pr_last;
	t_list	*tmp;

	pr_last = NULL;
	tmp = NULL;
	last = NULL;
	if (!stack || !(*stack))
		return ;
	last = lstlast(*stack);
	pr_last = prev_last(*stack);
	if (!pr_last)
		return ;
	tmp = *stack;
	*stack = pr_last->next;
	last->next = tmp;
	pr_last->next = NULL;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	bouth_rr(stack_a);
	bouth_rr(stack_b);
	write(1, "rrr\n", 4);
}

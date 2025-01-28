/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations_bonus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:47:37 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:24:14 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra_bonus(t_list **stack_a)
{
	t_list	*last;
	t_list	*pr_last;
	t_list	*tmp;

	pr_last = NULL;
	tmp = NULL;
	last = NULL;
	if (!stack_a || !(*stack_a))
		return ;
	last = lstlast_bonus(*stack_a);
	pr_last = prev_last_bonus(*stack_a);
	if (!pr_last)
		return ;
	tmp = *stack_a;
	*stack_a = pr_last->next;
	last->next = tmp;
	pr_last->next = NULL;
}

void	rrb_bonus(t_list **stack_b)
{
	t_list	*last;
	t_list	*pr_last;
	t_list	*tmp;

	pr_last = NULL;
	tmp = NULL;
	last = NULL;
	if (!stack_b || !(*stack_b))
		return ;
	last = lstlast_bonus(*stack_b);
	pr_last = prev_last_bonus(*stack_b);
	if (!pr_last)
		return ;
	tmp = *stack_b;
	*stack_b = pr_last->next;
	last->next = tmp;
	pr_last->next = NULL;
}

void	rrr_bonus(t_list **stack_a, t_list **stack_b)
{
	rra_bonus(stack_a);
	rrb_bonus(stack_b);
}

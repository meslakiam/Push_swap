/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:45:55 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/29 16:25:07 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra_bonus(t_list **stack_a)
{
	t_list	*last;
	t_list	*tmp;

	last = NULL;
	tmp = NULL;
	if (!stack_a || !(*stack_a))
		return ;
	last = lstlast_bonus((*stack_a));
	if (!last || last == (*stack_a))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	rb_bonus(t_list **stack_b)
{
	t_list	*last;
	t_list	*tmp;

	last = NULL;
	tmp = NULL;
	if (!stack_b || !(*stack_b))
		return ;
	last = lstlast_bonus((*stack_b));
	if (!last || last == (*stack_b))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	rr_bonus(t_list **stack_a, t_list **stack_b)
{
	ra_bonus(stack_a);
	rb_bonus(stack_b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:49:15 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:23:30 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa_bonus(t_list **stack_a)
{
	t_list	*tmp;

	tmp = NULL;
	if (!stack_a || !(*stack_a) || !((*stack_a)->next))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
}

void	sb_bonus(t_list **stack_b)
{
	t_list	*tmp;

	tmp = NULL;
	if (!stack_b || !(*stack_b) || !((*stack_b)->next))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
}

void	ss_bonus(t_list **stack_a, t_list **stack_b)
{
	sa_bonus(stack_a);
	sb_bonus(stack_b);
}

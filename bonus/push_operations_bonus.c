/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:50:19 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:22:23 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa_bonus(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = NULL;
	if ((!stack_a || !stack_b) || !(*stack_b))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	lstadd_front_bonus(stack_a, tmp);
}

void	pb_bonus(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp;

	tmp = NULL;
	if ((!stack_b || !stack_a) || !(*stack_a))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	lstadd_front_bonus(stack_b, tmp);
}

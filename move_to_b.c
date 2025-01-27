/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:00:20 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 22:10:09 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_and_check_to_b(t_list **stack_a, t_list **stack_b, int check,
		int flage)
{
	pb(stack_b, stack_a);
	check = 1;
	if (flage == 1)
		rb(stack_b);
	else if (flage == 2)
	{
		if (lstsize(*stack_b) > 1)
		{
			if ((*stack_b)->data < ((*stack_b)->next)->data)
				sb(stack_b);
		}
	}
	return (check);
}

int	check_till_end(int data, int *arry, int end, int i)
{
	int	check;

	check = 0;
	while ((++i) <= end)
	{
		if (data <= arry[i])
		{
			check = 1;
			break ;
		}
	}
	return (check);
}

void	fill_b(t_list **stack_a, t_list **stack_b, t_data *data)
{
	int	i;
	int	check;

	i = 0;
	data->arrylent = lstsize(*stack_a);
	data->arry = sorted_arry(*stack_a);
	while (*stack_a)
	{
		check = 0;
		if (((*stack_a)->data <= data->arry[data->start]))
			check = push_and_check_to_b(stack_a, stack_b, check, 1);
		else if (check_till_end((*stack_a)->data, data->arry, data->end,
				i) == 1)
			check = push_and_check_to_b(stack_a, stack_b, check, 2);
		if (check == 1)
		{
			if (data->end <= data->arrylent)
			{
				data->start++;
				data->end++;
			}
		}
		else
			ra(stack_a);
	}
}

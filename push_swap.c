/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:40 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 22:03:08 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize(t_data *data)
{
	data->arry = NULL;
	data->arrylent = 0;
	data->end = 0;
	data->start = 0;
	data->index = 0;
}

void	move_to_b(t_list **stack_a, t_list **stack_b, t_data *data)
{
	int	i;

	data->start = 0;
	i = data->start;
	if (lstsize(*stack_a) <= 10)
		data->end = 1;
	else if (lstsize(*stack_a) <= 100)
		data->end = lstsize(*stack_a) / CHAINE_100;
	else
		data->end = lstsize(*stack_a) / CHAINE_500;
	fill_b(stack_a, stack_b, data);
	free(data->arry);
}

void	back_to_a(t_list **stack_a, t_list **stack_b)
{
	int		largest;
	t_list	top;

	top = **stack_b;
	largest = 0;
	if (!stack_b || !(*stack_b))
		return ;
	while (*stack_b)
	{
		index_list(stack_b);
		largest = the_largest(*stack_b);
		if (largest == 0 && lstsize(*stack_b) == 1)
		{
			pa(stack_a, stack_b);
			break ;
		}
		if (largest <= (lstsize(*stack_b) / 2))
			move_to_top(stack_b, largest, 1);
		else if (largest > (lstsize(*stack_b) / 2))
			move_to_top(stack_b, largest, 2);
		pa(stack_a, stack_b);
	}
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_data	data;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		exit(1);
	initialize(&data);
	push_in_a(argv, &stack_a);
	check_if_sorted(&stack_a);
	sorting_2(&stack_a);
	sorting_3(&stack_a);
	sorting_4(&stack_a, &stack_b);
	sorting_5(&stack_a, &stack_b);
	check_if_sorted(&stack_a);
	move_to_b(&stack_a, &stack_b, &data);
	back_to_a(&stack_a, &stack_b);
	lstclear(&stack_a);
	return (0);
}

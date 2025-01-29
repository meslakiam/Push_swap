/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:42:05 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/29 21:57:59 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	aplly_operations(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strcmp_bonus(str, "pa\n") == 0)
		pa_bonus(stack_a, stack_b);
	else if (ft_strcmp_bonus(str, "pb\n") == 0)
		pb_bonus(stack_b, stack_a);
	else if (ft_strcmp_bonus(str, "sa\n") == 0)
		sa_bonus(stack_a);
	else if (ft_strcmp_bonus(str, "sb\n") == 0)
		sb_bonus(stack_b);
	else if (ft_strcmp_bonus(str, "ss\n") == 0)
		ss_bonus(stack_a, stack_b);
	else if (ft_strcmp_bonus(str, "ra\n") == 0)
		ra_bonus(stack_a);
	else if (ft_strcmp_bonus(str, "rb\n") == 0)
		rb_bonus(stack_b);
	else if (ft_strcmp_bonus(str, "rr\n") == 0)
		rr_bonus(stack_a, stack_b);
	else if (ft_strcmp_bonus(str, "rra\n") == 0)
		rra_bonus(stack_a);
	else if (ft_strcmp_bonus(str, "rrb\n") == 0)
		rrb_bonus(stack_b);
	else if (ft_strcmp_bonus(str, "rrr\n") == 0)
		rrr_bonus(stack_a, stack_b);
}

int	check_the_moves_existing(char *actions)
{
	if (ft_strcmp_bonus(actions, "pa\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "pb\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "sa\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "sb\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "ss\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "ra\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "rb\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "rr\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "rra\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "rrb\n") == 0)
		return (1);
	else if (ft_strcmp_bonus(actions, "rrr\n") == 0)
		return (1);
	return (0);
}

void	checker(t_list **stack_a, t_list **stack_b)
{
	char	*str;
	char	*read_line;
	char	*operations;
	char	*splited_moves;
	int		count;

	count = 0;
	while (1)
	{
		read_line = get_next_line(0, 0);
		if (!read_line)
			break ;
		if (check_the_moves_existing(read_line))
			aplly_operations(stack_a, stack_b, read_line);
		else
		{
			get_next_line(0, 1);
			free(read_line);
			lstclear_bonus(stack_a);
			lstclear_bonus(stack_b);
			write(1, "Error\n", 6);
			exit(2);
		}
		free(read_line);
	}
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		exit(0);
	push_in_a_bonus(argv, &stack_a);
	checker(&stack_a, &stack_b);
	if (!stack_b)
		check_if_sorted_bonus(&stack_a);
	lstclear_bonus(&stack_a);
	lstclear_bonus(&stack_b);
	write(1, "KO\n", 3);
	return (0);
}

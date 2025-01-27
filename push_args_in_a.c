/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_args_in_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:08:33 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/27 22:08:34 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cmp_list(t_list **stack_a, char *str)
{
	long	num;
	t_list	*head;

	num = 0;
	head = *stack_a;
	num = ft_atoll(str);
	if (num > 2147483647 || num < -2147483648)
		return (0);
	while (head)
	{
		if (head->data == num)
			return (0);
		head = head->next;
	}
	return (1);
}

void	add_to_list(t_list **stack_a, char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (cmp_list(stack_a, str[i]) == 0)
		{
			lstclear(stack_a);
			free_strings(str, i);
			write(2, "Error\n", 6);
			exit(1);
		}
		else
		{
			lstadd_back(stack_a, lstnew(ft_atoll(str[i])));
			free(str[i]);
		}
		i++;
	}
	free(str);
}

void	creat_list(t_list **stack_a, char **str, char *check)
{
	if (ft_strcmp(check, "yes") == 0)
		add_to_list(stack_a, str);
	else
	{
		lstclear(stack_a);
		write(2, "Error\n", 6);
		free_strings(str, 0);
		exit(1);
	}
}

void	push_in_a(char **str, t_list **stack_a)
{
	int		i;
	int		j;
	char	**tmp;
	char	*check;

	tmp = NULL;
	check = NULL;
	i = 1;
	j = 0;
	while (str[i])
	{
		tmp = split(str[i], ' ');
		if (!tmp || *tmp == NULL)
		{
			write(2, "Error\n", 6);
			lstclear(stack_a);
			free_arry_of_strings(tmp);
			exit(1);
		}
		check = check_validation(tmp);
		creat_list(stack_a, tmp, check);
		i++;
	}
}

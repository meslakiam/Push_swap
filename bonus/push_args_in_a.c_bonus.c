/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_args_in_a.c_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:53:24 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 18:56:06 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static	int	cmp_list(t_list **stack_a, char *str)
{
	long	num;
	t_list	*head;

	num = 0;
	head = *stack_a;
	num = ft_atoll_bonus(str);
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

static	void	add_to_list(t_list **stack_a, char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (cmp_list(stack_a, str[i]) == 0)
		{
			lstclear_bonus(stack_a);
			free_strings_bonus(str, i);
			write(2, "Error\n", 6);
			exit(1);
		}
		else
		{
			lstadd_back_bonus(stack_a, lstnew_bonus(ft_atoll_bonus(str[i])));
			free(str[i]);
		}
		i++;
	}
	free(str);
}

static void	creat_list(t_list **stack_a, char **str, char *check)
{
	if (ft_strcmp_bonus(check, "yes") == 0)
		add_to_list(stack_a, str);
	else
	{
		lstclear_bonus(stack_a);
		write(2, "Error\n", 6);
		free_strings_bonus(str, 0);
		exit(1);
	}
}

void	push_in_a_bonus(char **str, t_list **stack_a)
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
		tmp = split_bonus(str[i], ' ');
		if (!tmp || *tmp == NULL)
		{
			write(2, "Error\n", 6);
			lstclear_bonus(stack_a);
			free_arry_of_strings_bonus(tmp);
			exit(1);
		}
		check = check_validation_bonus(tmp);
		creat_list(stack_a, tmp, check);
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:46:17 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:31:05 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_if_sorted_bonus(t_list **stack_a)
{
	t_list	*head;

	head = *stack_a;
	while (head)
	{
		if (!(head->next))
			break ;
		if (head->data > (head->next)->data)
			break ;
		head = head->next;
	}
	t_list	*hea = *stack_a;
	while(hea)
	{
		printf("%d\n", hea->data);
		hea = hea->next;
	}
	if (head->next == NULL)
	{
        write(1, "OK\n", 3);
		lstclear_bonus(stack_a);
		exit(0);
	}
}
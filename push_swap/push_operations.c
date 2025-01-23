/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:48:02 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/21 17:48:03 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_list   **stack_a, t_list   **stack_b)
{
    t_list  *tmp;

    tmp = NULL;
    if((!stack_a || !stack_b) || !(*stack_b))
        return;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    lstadd_front(stack_a, tmp);
    write(1, "pa\n", 3);
}

void    pb(t_list   **stack_b, t_list   **stack_a)
{
    t_list  *tmp;

    tmp = NULL;
    if((!stack_b|| !stack_a)|| !(*stack_a))
        return;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    lstadd_front(stack_b, tmp);
    write(1, "pb\n", 3);
}

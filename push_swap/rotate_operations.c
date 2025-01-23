/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:10 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/21 17:54:02 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_list   **stack_a)
{
    t_list *last;
    t_list  *tmp;

    last = NULL;
    tmp = NULL;
    if(!stack_a || !(*stack_a))
        return;
    last = lstlast((*stack_a));
    if(!last || last == (*stack_a))
        return;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    last->next = tmp;
    tmp->next = NULL;
    write(1, "ra\n", 3);
}
void    rb(t_list   **stack_b)
{
    t_list *last;
    t_list  *tmp;

    last = NULL;
    tmp = NULL;
    if(!stack_b || !(*stack_b))
        return;
    last = lstlast((*stack_b));
    if(!last || last == (*stack_b))
        return;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    last->next = tmp;
    tmp->next = NULL;
    write(1, "rb\n", 3);
}
void    bouth_r(t_list   **stack)
{
    t_list *last;
    t_list  *tmp;

    last = NULL;
    tmp = NULL;
    if(!stack || !(*stack))
        return;
    last = lstlast((*stack));
    if(!last || last == (*stack))
        return;
    tmp = *stack;
    *stack = (*stack)->next;
    last->next = tmp;
    tmp->next = NULL;
}
void    rr(t_list   **stack_a, t_list   **stack_b)
{
    bouth_r(stack_a);
    bouth_r(stack_b);
    write(1, "rr\n", 3);
}

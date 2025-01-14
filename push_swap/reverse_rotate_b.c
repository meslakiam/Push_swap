/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:06 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/13 17:14:30 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrb(t_list  **stack_b)
{
    t_list  *last;
    t_list  *pr_last;

    pr_last = NULL;
    last = NULL;

    if(!stack_b || !(*stack_b))
        return;
    last = lstlast(*stack_b);
    if(last == *stack_b)
    {
        sa(stack_b);
        return;
    }
    pr_last = prev_last(*stack_b);
    if(!pr_last)
        return;
    last->next = *stack_b;
    *stack_b = last;
    pr_last->next = NULL;
}

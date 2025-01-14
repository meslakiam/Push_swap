/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:11:58 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/13 17:14:25 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_list  **stack_a)
{
    t_list  *last;
    t_list  *pr_last;

    pr_last = NULL;
    last = NULL;

    if(!stack_a || !(*stack_a))
        return;
    last = lstlast(*stack_a);
    if(last == *stack_a)
    {
        sa(stack_a);
        return;
    }
    pr_last = prev_last(*stack_a);
    if(!pr_last)
        return;
    last->next = *stack_a;
    *stack_a = last;
    pr_last->next = NULL;

}

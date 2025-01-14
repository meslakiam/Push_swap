/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:13:40 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/13 17:13:43 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    pb(t_list   **stack_b, t_list   **stack_a)
{
    t_list  *last_b;
    t_list  *last_a;
    t_list  *pre_last;

    if((!stack_b || !stack_a) || !(*stack_a))
        return;
    last_a = lstlast(*stack_a);
    if(!last_a)
        return;
    last_b = lstlast(*stack_b);
    if(!last_b)
        *stack_b = last_a;
    else 
        last_b->next = last_a;
    pre_last = prev_last(*stack_a);
    if(!pre_last)
    {
        *stack_a = NULL;
        return;
    }
    else
        pre_last->next = NULL;
    (*stack_b)->top++;
    (*stack_a)->top--;
}

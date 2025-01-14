/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:13 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/13 17:12:14 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rb(t_list   **stack_b)
{
    t_list *last;

    last = NULL;
    if(!stack_b || !(*stack_b))
        return;
    last = lstlast((*stack_b));
    if(!last || last == (*stack_b))
        return;
    if(((*stack_b)->next)->next == NULL)
    {
        sa(stack_b);
        return;
    }
    last->next = (*stack_b);
    (*stack_b) = (*stack_b)->next;
    (last->next)->next = NULL;
}

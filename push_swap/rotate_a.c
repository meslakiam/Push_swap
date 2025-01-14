/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:10 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/13 17:12:11 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_list   **stack_a)
{
    t_list *last;
    t_list  *down;

    last = NULL;
    down = NULL;
    if(!stack_a || !(*stack_a))
        return;
    last = lstlast((*stack_a));
    if(!last || last == (*stack_a))
        return;
    if(((*stack_a)->next)->next == NULL)
    {
        sa(stack_a);
        return;
    }
    down = (*stack_a);
    (*stack_a) = (*stack_a)->next;
    last->next = down;
    down->next = NULL;
}

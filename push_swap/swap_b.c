/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:29 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/13 17:12:30 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static  t_list  *find_last_tree(t_list *head)
{
    t_list  *last_tree;
    t_list  *tmp;

    tmp = NULL;
    last_tree = NULL;
    if(!head)
        return NULL;
    while(head)
    {
        tmp = head;
        if(!tmp || (tmp->next == NULL) || (((tmp->next)->next) == NULL))
            return NULL;
        if(((tmp->next)->next)->next == NULL)
        {
            last_tree = head;
            return last_tree;
        }
        head = head->next;
    }
    return NULL;
}

void    sb(t_list **stack_b)
{
    t_list *head;
    t_list  *tmp;
    t_list  *last;
    t_list *last_tree;

    head = *stack_b; 

    last = lstlast(head);
    if(!last || head == last)
        return;
    last_tree = find_last_tree(head);
    if(!last_tree)
    {
        tmp = head;
        head = head->next;
        head->next = tmp;
        (head->next)->next = NULL;
        *stack_b = head;
        return;
    }
    tmp = last_tree->next;
    last_tree->next = last;
    last->next = tmp;
    (last->next)->next = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_back_in_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:10:08 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/21 21:22:41 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    index_list(t_list   **stack_b)
{
    int i;
    t_list  *head;

    head = *stack_b;
    i = 0;
    while(head)
    {
        head->index = i;
        i++;
        head = head->next;
    }
}
int the_largest(t_list  *stack_b)
{
    int index;

    index = 0;
    while(stack_b)
    {
        if(!(stack_b->next))
            break;
        if(stack_b->data > (stack_b->next)->data)
            index = stack_b->index;
        stack_b = stack_b->next;
    }
    return index;
}
void    move_largest_to_top(t_list  **stack_b, int large_index, int check)
{
    t_list  *large;

    large = *stack_b;
    while(large->index != large_index)
        large = large->next;
    while((*stack_b) != large)
    {
        if(check == 1)
            rb(stack_b);
        else if(check == 2)
            rrb(stack_b);
    }
}

void    back_to_a(t_list    **stack_a, t_list   **stack_b)
{
    int largest;

    largest = 0;
    if(!stack_b || !(*stack_b))
        return;
    while(stack_b)
    {
        index_list(stack_b);
        largest = the_largest(*stack_b);
        if(largest == 0)
        {
            pa(stack_a, stack_b);
            break;
        }
        else if(largest <= (lstsize(*stack_a) / 2))
            move_largest_to_top(stack_b, largest, 1);
        else if(largest > (lstsize(*stack_a) / 2))
            move_largest_to_top(stack_b, largest, 2);
        pa(stack_a, stack_b);
    } 
}

// int main()
// {
//     t_list  *stack_a;
//     t_list  *stack_b;
//     t_list  *head;
//     int *arry;
//     int i;

//     i = 0;
//     stack_a = NULL;
//     arry = NULL;
//     head = stack_a;
//     stack_a = NULL;
//     stack_b = NULL;
//     lstadd_back(&stack_a, lstnew(10));
//     lstadd_back(&stack_a, lstnew(230));
//     lstadd_back(&stack_a, lstnew(-300));
//     lstadd_back(&stack_a, lstnew(4440));
//     lstadd_back(&stack_a, lstnew(5));
//     back_to_a(&stack_b, &stack_a);
    
//     // head = stack_a;
//     // printf("dd\n");
//     // head = head->next;
//     // head = head->next;
    
//     // sw(&stack_a,head);
//     while(head)
//         {
//             printf("---%i---\n",head->data);
//             head = head->next;
//         }
//     head = stack_a;
//     while(head)
//         {
//             printf("**%i**\n",head->index);
//             head = head->next;
//         }
//     // while(head)
//     // {
//     //     printf("***%i***\n",head->index);
//     //     head = head->next;
//     // }
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:40 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/14 16:08:14 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *bef(t_list *stack, t_list *node)
{
    t_list *prev;
    
    prev = NULL;
    while (stack && stack != node)
    {
        prev = stack;
        stack = stack->next;
    }
    return prev;
}

void swap(t_list **stack_a)
{
    t_list *head;
    t_list *prev;
    int i = 0;

    prev = NULL;
    head = *stack_a;
    if (!head || !head->next) return;

    while (head && head->next) 
    {
        if (head->data > head->next->data)
        {
            printf("\n--%d--\n",i++);
            prev = bef(*stack_a, head);
            if (prev) 
                prev->next = head->next; 
            else
                *stack_a = head->next;
            
            t_list *temp = head->next;
            head->next = temp->next;
            temp->next = head;

            head = *stack_a;
        }
        else
            head = head->next;
    }
}

int main(int argc,char *argv[])
{
    int i;
    int j;
    t_list *stack_a;
    
    stack_a = NULL;
    j = 0;
    i = 1;
    if(argc > 1)
    {    
        push_in_a(argv,&stack_a);
        swap(&stack_a);
        while(stack_a)
        {
            printf("--%lld--\n",stack_a->data);
            stack_a = stack_a->next;
        }
    }
    else
        write(1,"is empty\n",9);
    return 0;
}

// int main()
// {
//     t_list *stack_a;
    
//     stack_a = NULL;
//     lstadd_back(&stack_a, lstnew(10));
//     lstadd_back(&stack_a, lstnew(20));
//     // lstadd_back(&stack_a, lstnew(30));
//     // lstadd_back(&stack_a, lstnew(40));
//     // lstadd_back(&stack_a, lstnew(50));
//     sa(&stack_a);
    
//     while(stack_a)
//         {
//             printf("%lld\n",stack_a->data);
//             stack_a = stack_a->next;
//         }
// }

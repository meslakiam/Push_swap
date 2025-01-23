/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_arry.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:55:15 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/21 18:04:14 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sw(int *arry, int i)
{
    int tmp;
    tmp = 0;
    tmp = arry[i];
    arry[i] = arry[i + 1];
    arry[i + 1] = tmp;
}

int *bubble_sort_arry(int *arry, int size)
{
    int i;
    int check;
    
    check = 1;
    i = 0;
    while(check == 1)
    {
        check = 0;
        i = 0;
        while(arry[i])
        {
            if(!arry[i + 1])
                break;
            if(arry[i] > arry[i + 1])
            {
                sw(arry, i);
                check = 1;
            }
            i++;
        }
        size--;
    }
    return arry;
}

int *fill_the_arry(t_list   *stack_a, int *arry,int size)
{
    int i;

    i = 0;
    i = 0;
    while(stack_a)
    {
        arry[i] = stack_a->data;
        stack_a = stack_a->next;
        i++;
    }
    arry = bubble_sort_arry(arry,size);
    return arry;
}

int    *sorted_arry(t_list  *stack_a)
{
    int i;
    int *arry;
    
    i = 0;
    i = lstsize(stack_a);
    arry = malloc(i * sizeof(int));
    arry = fill_the_arry(stack_a, arry, i);
    return arry;
}


// int main()
// {
//     t_list  *stack_a;
//     t_list  *head;
//     int *arry;
//     int i;

//     i = 0;
//     arry = NULL;
//     head = NULL;
//     stack_a = NULL;
//     lstadd_back(&stack_a, lstnew(10));
//     lstadd_back(&stack_a, lstnew(230));
//     lstadd_back(&stack_a, lstnew(-300));
//     lstadd_back(&stack_a, lstnew(4440));
//     lstadd_back(&stack_a, lstnew(5));
//     arry = sorted_arry(stack_a);
//     while(arry[i])
//     {
//         printf("%d\n",arry[i]);
//         i++;
//     }
//     // head = stack_a;
//     // printf("dd\n");
//     // head = head->next;
//     // head = head->next;
    
//     // sw(&stack_a,head);
    
//     // while(stack_a)
//     //     {
//     //         printf("%i\n",stack_a->data);
//     //         stack_a = stack_a->next;
//     //     }
// }
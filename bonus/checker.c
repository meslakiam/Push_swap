/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:42:05 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:51:32 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"


void    aplly_operations(t_list **stack_a, t_list   **stack_b, char *str)
{
    
    if(ft_strcmp_bonus(str, "pa") == 0)
        pa_bonus(stack_a, stack_b);
    else if(ft_strcmp_bonus(str, "pb") == 0)
        pb_bonus(stack_b, stack_a);
    else if(ft_strcmp_bonus(str, "sa\n") == 0)
        sa_bonus(stack_a);
    else if(ft_strcmp_bonus(str, "sb\n") == 0)
        sb_bonus(stack_b);
    else if(ft_strcmp_bonus(str, "ss\n") == 0)
        ss_bonus(stack_a , stack_b);
    else if(ft_strcmp_bonus(str, "ra\n") == 0)
        ra_bonus(stack_a);
    else if(ft_strcmp_bonus(str, "rb\n") == 0)
        rb_bonus(stack_b);
    else if(ft_strcmp_bonus(str, "rr\n") == 0)
        rr_bonus(stack_a , stack_b);
    else if(ft_strcmp_bonus(str, "rra\n") == 0)
        rra_bonus(stack_a);
    else if(ft_strcmp_bonus(str, "rrb\n") == 0)
        rrb_bonus(stack_b);
    else if(ft_strcmp_bonus(str, "rrr\n") == 0)
        rrr_bonus(stack_a , stack_b);
}

void    checker(t_list  **stack_a, t_list   **stack_b)
{
    char    *str;
    char    *read_line;
    char    *operations;
    char    *splited_moves;
    int count;

    count = 0;
    while(1)
    {
        read_line = get_next_line(0);
        if(!read_line)
            break;
        aplly_operations(stack_a, stack_b, read_line);
        free(read_line);
    }   
}
int main(int argc, char *argv[])
{
    t_list  *stack_a;
    t_list  *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    if(argc == 1)
        exit(0);
	push_in_a_bonus(argv, &stack_a);
    checker(&stack_a, &stack_b);
    check_if_sorted_bonus(&stack_a);
    lstclear_bonus(&stack_a);
    lstclear_bonus(&stack_b);
    write(1, "KO\n", 3);

    return 0;
}

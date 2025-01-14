#include "push_swap.h"

void    pa(t_list   **stack_a, t_list   **stack_b)
{
    t_list  *last_a;
    t_list  *last_b;
    t_list  *pre_last;

    if((!stack_a || !stack_b) || !(*stack_b))
        return;
    last_b = lstlast(*stack_b);
    if(!last_b)
        return;
    last_a = lstlast(*stack_a);
    if(!last_a)
        *stack_a = last_b;
    else 
        last_a->next = last_b;
    pre_last = prev_last(*stack_b);
    if(!pre_last)
    {
        *stack_b = NULL;
        return;
    }
    else
        pre_last->next = NULL;
    (*stack_a)->top++;
    (*stack_b)->top--;
}

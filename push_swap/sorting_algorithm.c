// #include "push_swap.h"

// int *order_numbers(t_list   **stack_a, t_list   **stack_b)
// {
//     int i;
//     int tmp;
//     int *arry;
//     int check;

//     check == 0;
//     i = 0;
//     tmp = 0;
//     arry = put_in_arry(stack_a);
//     while(check == 1)
//     {
//         check = 0;
//         while(arry[i])
//         {
//             if(arry[i] > arry[i + 1])
//             {
//                 tmp = arry[i];
//                 arry[i] = arry[i + 1];
//                 arry[i + 1] = tmp;
//                 check = 1;
//             }
//             i++;
//         }
//         i = 0;
//     }

// }
// int *put_in_arry(t_list **  stack_a)
// {
//     int i;
//     int    *arry;
//     t_list  *head;
//     int len;

//     i = 0;
//     head = *stack_a;
//     arry = NULL;
    
//     len = lstsize(*stack_a);
//     arry = malloc(sizeof(int) * len);
//     while(head)
//     {
//         arry[i] = head->data;
//         head = head->next;
//         i++; 
//     }
//     return arry;
// }
// void    algo(t_list **stack_a, t_list   **stack_b)
// {
//     int *s_numbers;

//     s_numbers = NULL;
//     if(!stack_a || !stack_b || !(*stack_a) || !(*stack_b))
//         return;
//     s_numbers = order_numbers(stack_a);
// }

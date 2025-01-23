// #include "push_swap.h"

// int *order_numbers(int *arry)
// {
//     int i;
//     int tmp;
//     int check;

//     check == 1;
//     i = 0;
//     tmp = 0;
//     // arry = put_in_arry(stack_a);
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
//     return arry;
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
// int main(int argc, char const *argv[])
// {
//     int i = 0;
//     int arry[]= {1,3,2,7,5,4,8};
//     order_numbers(arry);
//     while(arry)
//     return 0;
// }

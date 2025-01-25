#include "push_swap.h"

int    push_and_check_to_b(t_list  **stack_a, t_list **stack_b,int check, int flage)
{
    pb(stack_b,stack_a);
    check = 1;
    if(flage == 1)
        rb(stack_b);
    else if(flage == 2)
    {
        if(lstsize(*stack_b) > 1)
        {
            if((*stack_b)->data < ((*stack_b)->next)->data)
                sb(stack_b);
        }
    }
    return check;
}

int check_till_end(int data,int *arry, int end, int i)
{
    int check;

    check = 0;
    while((++i) <= end)
    {
        if(data <= arry[i])
        {
            check = 1;
            break;
        }
    }
    return check;
}


void    fill_b(t_list   **stack_a,t_list **stack_b, int   end)
{
    int i = 0;
    int check;
    int arrylent;
    int *arry;
    int start;
    t_list  *head;

    head = NULL;
    arrylent = lstsize(*stack_a);
    head = *stack_a;
    start = 0;
    
    arry = sorted_arry(*stack_a);
    while(*stack_a)
    {
            check = 0;
            if(i == start && ((*stack_a)->data <= arry[start]))
                check = push_and_check_to_b(stack_a, stack_b,check, 1);
            
            else if(check_till_end((*stack_a)->data, arry, end, i) == 1)
               check = push_and_check_to_b(stack_a, stack_b, check, 2);
            if(check == 1)
            {
                if(end + 1 < arrylent)
                {
                    start++;
                    end++;
                    i = start;
                }
            }
            else
                ra(stack_a);
    }
}

void    move_to_b(t_list    **stack_a, t_list   **stack_b)
{
    int start;
    int i;
    int end;

    start = 0;
    i = start;
    if(lstsize(*stack_a) <= 10)
        end = 2;
    else if(lstsize(*stack_a) <= 100)
        end = lstsize(*stack_a) / 6;
    else
        end = lstsize(*stack_a) / 10;
    fill_b(stack_a, stack_b, end);
    
}


int main(int argc, char *argv[])
{
    t_list  *stack_a;
    t_list  *stack_b;
    // t_list  *head;
    int *arry;
    int i;

    i = 1;
    (void)argc;
    // (void)argv;
    arry = NULL;
    
    stack_a = NULL;
    stack_b = NULL;

    // lstadd_back(&stack_a, lstnew(10));
    // lstadd_back(&stack_a, lstnew(5));
    // lstadd_back(&stack_a, lstnew(2));
    // lstadd_back(&stack_a, lstnew(8));
    // lstadd_back(&stack_a, lstnew(6));
    // lstadd_back(&stack_a, lstnew(4));
    // lstadd_back(&stack_a, lstnew(7));
    // lstadd_back(&stack_a, lstnew(1));
    // lstadd_back(&stack_a, lstnew(9));
    // lstadd_back(&stack_a, lstnew(3));
    // head = stack_a;
    // while (head)
    // {
        // printf("%d\n", head->data);
        // head = head->next;
    // }
    push_in_a(argv,&stack_a);
    move_to_b(&stack_a, &stack_b);
    // back_to_a(&stack_a, &stack_b);




       
    // lstadd_back(&stack_a, lstnew(411));
    // lstadd_back(&stack_a, lstnew(100));
    // lstadd_back(&stack_a, lstnew(58));
    // lstadd_back(&stack_a, lstnew(419));
    // lstadd_back(&stack_a, lstnew(34));
    // lstadd_back(&stack_a, lstnew(22));
    // lstadd_back(&stack_a, lstnew(190));
    // lstadd_back(&stack_a, lstnew(45));
    // lstadd_back(&stack_a, lstnew(56));
    // lstadd_back(&stack_a, lstnew(104));
    // lstadd_back(&stack_a, lstnew(70));
    // lstadd_back(&stack_a, lstnew(42));
    // lstadd_back(&stack_a, lstnew(29));
    // lstadd_back(&stack_a, lstnew(303));
    // lstadd_back(&stack_a, lstnew(50));
    // lstadd_back(&stack_a, lstnew(295));
    // lstadd_back(&stack_a, lstnew(179));
    // lstadd_back(&stack_a, lstnew(88));
    // lstadd_back(&stack_a, lstnew(269));
    // lstadd_back(&stack_a, lstnew(191));
    // lstadd_back(&stack_a, lstnew(142));
    // lstadd_back(&stack_a, lstnew(130));
    // lstadd_back(&stack_a, lstnew(78));
    // lstadd_back(&stack_a, lstnew(278));
    // lstadd_back(&stack_a, lstnew(7));
    // lstadd_back(&stack_a, lstnew(310));
    // lstadd_back(&stack_a, lstnew(234));
    // lstadd_back(&stack_a, lstnew(115));
    // lstadd_back(&stack_a, lstnew(222));
    // lstadd_back(&stack_a, lstnew(19));
    // lstadd_back(&stack_a, lstnew(39));
    // lstadd_back(&stack_a, lstnew(141));
    // lstadd_back(&stack_a, lstnew(91));
    // lstadd_back(&stack_a, lstnew(379));
    // lstadd_back(&stack_a, lstnew(481));
    // lstadd_back(&stack_a, lstnew(153));
    // lstadd_back(&stack_a, lstnew(180));
    // lstadd_back(&stack_a, lstnew(177));
    // lstadd_back(&stack_a, lstnew(346));
    // lstadd_back(&stack_a, lstnew(275));
    // lstadd_back(&stack_a, lstnew(392));
    // lstadd_back(&stack_a, lstnew(49));
    // lstadd_back(&stack_a, lstnew(249));
    // lstadd_back(&stack_a, lstnew(473));
    // lstadd_back(&stack_a, lstnew(210));
    // lstadd_back(&stack_a, lstnew(401));
    // lstadd_back(&stack_a, lstnew(382));
    // lstadd_back(&stack_a, lstnew(291));
    // lstadd_back(&stack_a, lstnew(321));
    // lstadd_back(&stack_a, lstnew(157));
    // lstadd_back(&stack_a, lstnew(476));
    // lstadd_back(&stack_a, lstnew(112));
    // lstadd_back(&stack_a, lstnew(400));
    // lstadd_back(&stack_a, lstnew(390));
    // lstadd_back(&stack_a, lstnew(54));
    // lstadd_back(&stack_a, lstnew(16));
    // lstadd_back(&stack_a, lstnew(15));
    // lstadd_back(&stack_a, lstnew(173));
    // lstadd_back(&stack_a, lstnew(235));
    // lstadd_back(&stack_a, lstnew(12));
    // lstadd_back(&stack_a, lstnew(64));
    // lstadd_back(&stack_a, lstnew(209));
    // lstadd_back(&stack_a, lstnew(305));
    // lstadd_back(&stack_a, lstnew(8));
    // lstadd_back(&stack_a, lstnew(111));
    // lstadd_back(&stack_a, lstnew(164));
    // lstadd_back(&stack_a, lstnew(416));
    // lstadd_back(&stack_a, lstnew(228));
    // lstadd_back(&stack_a, lstnew(99));
    // lstadd_back(&stack_a, lstnew(73));
    // lstadd_back(&stack_a, lstnew(468));
    // lstadd_back(&stack_a, lstnew(67));
    // lstadd_back(&stack_a, lstnew(334));
    // lstadd_back(&stack_a, lstnew(245));
    // lstadd_back(&stack_a, lstnew(195));
    // lstadd_back(&stack_a, lstnew(326));
    // lstadd_back(&stack_a, lstnew(85));
    // lstadd_back(&stack_a, lstnew(149));
    // lstadd_back(&stack_a, lstnew(230));
    // lstadd_back(&stack_a, lstnew(284));
    // lstadd_back(&stack_a, lstnew(320));
    // lstadd_back(&stack_a, lstnew(250));
    // lstadd_back(&stack_a, lstnew(450));
    // lstadd_back(&stack_a, lstnew(311));
    // lstadd_back(&stack_a, lstnew(456));
    // lstadd_back(&stack_a, lstnew(389));
    // lstadd_back(&stack_a, lstnew(372));
    // lstadd_back(&stack_a, lstnew(433));
    // lstadd_back(&stack_a, lstnew(81));
    // lstadd_back(&stack_a, lstnew(89));
    // lstadd_back(&stack_a, lstnew(11));
    // lstadd_back(&stack_a, lstnew(366));
    // lstadd_back(&stack_a, lstnew(203));
    // lstadd_back(&stack_a, lstnew(299));
    // lstadd_back(&stack_a, lstnew(122));
    // lstadd_back(&stack_a, lstnew(98));
    // lstadd_back(&stack_a, lstnew(133));
    // lstadd_back(&stack_a, lstnew(437));
    // lstadd_back(&stack_a, lstnew(415));
    // lstadd_back(&stack_a, lstnew(337));

















    // lstadd_back(&stack_b, lstnew(10));
    // lstadd_back(&stack_b, lstnew(230));
    // lstadd_back(&stack_b, lstnew(-300));
    // lstadd_back(&stack_b, lstnew(4440));
    // lstadd_back(&stack_b, lstnew(5));
    
    // while(arry[i])
    // {
    //     printf("%d\n",arry[i]);
    //     i++;
    // }
    // head = stack_a;
    // printf("dd\n");
    // head = head->next;
    // head = head->next;
    
    // sw(&stack_a,head);
    // move_to_b(&stack_a,&stack_b);
    // while(stack_a)
    // {
    //     printf("--%i--\n",stack_a->data);
    //     stack_a = stack_a->next;
    // }
    // while(stack_b)
    // {
    //     printf("**%i**\n",stack_b->data);
    //     stack_b = stack_b->next;
    // }
}
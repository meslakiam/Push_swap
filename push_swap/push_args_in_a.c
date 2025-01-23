#include "push_swap.h"

int cmp_list(t_list **stack_a , char *str)
{
    long num;

    num = 0;
    t_list *head = *stack_a;
    num = ft_atoll(str);
    if(num > 2147483647 || num < -2147483648)
        return 0;
    while(head)
    {
        if(head->data == num)
            return 0;
        head = head->next;
    }
    return 1;
}


char    *add_to_list(t_list **stack_a, char **str)
{
    int i;
    char *check;

    i = 0;
    check = "no";
    while(str[i])
    {
        if(cmp_list(stack_a,str[i]) == 0)
        {
            lstclear(stack_a);
            write(2,"Error\n",6);
            free_strings(str,i);
            return check;
        }
        else
        {
            lstadd_front(stack_a, lstnew(ft_atoll(str[i])));
            free(str[i]);
        }
        i++;
    }
    free(str);
    check = "yes";
    return check;
}
char *creat_list(t_list **stack_a, char**str, char  *check)
{
    if(ft_strcmp(check, "yes") == 0)
    {
        check = add_to_list(stack_a,str);
        if(ft_strcmp(check,"no") == 0)
            return check;
    }
    else
    {
        lstclear(stack_a);
        write(2,"Error\n",6);
        free_strings(str,0);
        return check;
    }
    return check;
}

void  push_in_a(char **str,t_list **stack_a)
{
    int i;
    int j;
    char **tmp;
    char *check;
    
    tmp = NULL;
    check = NULL;
    i = 1;
    j = 0;
    while(str[i])
    {
        tmp = ft_split(str[i],' ');
        if(tmp == NULL)
            return;
        check = check_validation(tmp);
        check = creat_list(stack_a, tmp, check);
        if(ft_strcmp(check, "no") == 0)
            return;
        i++; 
    }
}

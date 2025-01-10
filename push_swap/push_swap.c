#include "push_swap.h"



int cmp_list(a_list **stack_a , char *str)
{
    if(*stack_a == NULL)
        return 0;
    a_list *head = *stack_a;
    while(head)
    {
        
        if(ft_memcmper(head->data,str) == 0)
            return 1;
        head = head->next;
    }
    return 0;
}


char    *creat_list(a_list **stack_a, char **str)
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
            write(2,"error\n",6);
            free_strings(str);
            return check;
        }
        else
        {
            lstadd_back(stack_a, lstnew(ft_atoi(str[i])));
            free(str[i]);  
        }
        i++;
    }
    free(str);
    check = "yes";
    return check;
}

void  push_in_a(char **str,a_list **stack_a)
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
        check = check_validation(tmp);
        if(ft_strcmp(check, "yes") == 0)
        {
            check = creat_list(stack_a,tmp);
            if(ft_strcmp(check,"") == 0)
                return;
        }
        else
        {
            lstclear(stack_a);
            write(2,"error\n",6);
            free_strings(tmp);
            return ;
        } 
        i++; 
        free(tmp);
    }
}

int main(int argc,char *argv[])
{
    int i;
    int j;
    int num;
    char **args;
    a_list *stack_a;
    
    args = NULL;
    stack_a = NULL;
    j = 0;
    i = 1;
    push_in_a(argv,&stack_a);
    while(stack_a)
    {
        printf("%d\n",stack_a->data);
        stack_a = stack_a->next;
    }
    
    return 0;
}

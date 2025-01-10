#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../printf/ft_printf.h"
#include "../libft/libft.h"

typedef struct s_stack_a{

    int data;
    struct s_stack_a *next;
}   a_list;

typedef struct s_stack_b{

    int data;
    struct s_stack_b *next;
}   b_list;

char        *check_validation(char **str);
void        push_in_a(char **str,a_list **stack_a);
a_list      *lstlast(a_list *lst);
a_list      *lstnew(int data);
void        lstadd_back(a_list **lst, a_list *new);
void        lstdelone(a_list *lst);
void        lstclear(a_list **lst);
int         ft_strcmp(char *s1,char *s2);
int         ft_memcmper(void *s1,void *s2);

#endif
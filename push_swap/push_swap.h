#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_stack{

    long long data;
    struct  s_stack *next;
    int  top;
}   t_list;


char        *check_validation(char **str);
void        push_in_a(char **str,t_list **stack_a);
t_list      *lstlast(t_list *lst);
t_list      *lstnew(long long   data);
void        lstadd_back(t_list **lst, t_list *new);
void        lstclear(t_list **lst);
int         ft_strcmp(char *s1,char *s2);
void        free_strings(char **ptr, int i);
long long   ft_atoll(const char *str);
int         ft_isdigit(int n);
char        **ft_split(char const *s, char c);
char        *ft_strdup(const char *s1);
char        *ft_strjoin(char const *s1, char const *s2);
char        *ft_substr(char const *s, unsigned int start, size_t len);
size_t      ft_strlen(const char *str);
void        del_last(t_list **stack);
t_list      *prev_last(t_list   *head);
void        sa(t_list **stack_a);
void        sb(t_list **stack_b);
void        ss(t_list **stack_a, t_list **stack_b);
void        pa(t_list **stack_a, t_list **stack_b);
void        pb(t_list **stack_b, t_list **stack_a);
void        ra(t_list **stack_a);
void        rb(t_list **stack_b);
void        rr(t_list **stack_a, t_list **stack_b);
void        rra(t_list **stack_a);
void        rrb(t_list **stack_b);
void        rrr(t_list **stack_a, t_list **stack_b);


#endif

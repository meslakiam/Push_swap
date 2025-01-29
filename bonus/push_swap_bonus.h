/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:47:03 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:16:37 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "./get_next_line/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_data
{
	int				start;
	int				end;
	int				index;
	int				*arry;
	int				arrylent;
}					t_data;

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				index;
}					t_list;

void				check_if_sorted_bonus(t_list **stack_a);
void				checker(t_list **stack_a, t_list **stack_b);
void				push_in_a_bonus(char **str, t_list **stack_a);
char				**split_bonus(char const *s, char c);
void				*free_arry_of_strings_bonus(char **ptr);
char				*strjoin_bonus(char const *s1, char const *s2);
char				*check_validation_bonus(char **str);
int					ft_isdigit_bonus(int n);
int					ft_strcmp_bonus(char *s1, char *s2);
size_t				ft_strlen_bonus(const char *str);
long long			ft_atoll_bonus(const char *str);
void				free_strings_bonus(char **ptr, int i);
void				lstadd_back_bonus(t_list **lst, t_list *new);
void				lstadd_front_bonus(t_list **lst, t_list *new);
t_list				*lstnew_bonus(int data);
t_list				*lstlast_bonus(t_list *lst);
void				lstclear_bonus(t_list **lst);
t_list				*prev_last_bonus(t_list *head);
void				del_last_bonus(t_list **stack);
char				*ft_strdup_bonus(const char *s1);
char				*ft_substr_bonus(char const *s, unsigned int start,
						size_t len);

void				pa_bonus(t_list **stack_a, t_list **stack_b);
void				pb_bonus(t_list **stack_b, t_list **stack_a);
void				ss_bonus(t_list **stack_a, t_list **stack_b);
void				sb_bonus(t_list **stack_b);
void				sa_bonus(t_list **stack_a);
void				ra_bonus(t_list **stack_a);
void				rb_bonus(t_list **stack_b);
void				rr_bonus(t_list **stack_a, t_list **stack_b);
void				rrr_bonus(t_list **stack_a, t_list **stack_b);
void				rrb_bonus(t_list **stack_b);
void				rra_bonus(t_list **stack_a);

#endif
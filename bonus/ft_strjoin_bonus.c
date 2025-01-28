/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:49:30 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:03:38 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static char	*do_the_join(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	join = malloc(ft_strlen_bonus(s1) + ft_strlen_bonus(s2) + 1);
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}

char	*strjoin_bonus(char const *s1, char const *s2)
{
	char	*join;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup_bonus(s2));
	if (s2 == NULL)
		return (ft_strdup_bonus(s1));
	join = do_the_join(s1, s2);
	return (join);
}

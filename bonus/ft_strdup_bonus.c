/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:14:22 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:14:52 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*ft_strdup_bonus(const char *s1)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc(ft_strlen_bonus(s1) + 1);
	if (dst == NULL)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

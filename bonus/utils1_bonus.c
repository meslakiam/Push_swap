/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:23:25 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 18:54:15 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

long long	ft_atoll_bonus(const char *str)
{
	int			s;
	int			i;
	long long	c;

	i = 0;
	c = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		c = c * 10 + (str[i] - 48);
		i++;
	}
	return (s * c);
}

int	ft_isdigit_bonus(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	ft_strcmp_bonus(char *s1, char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
		{
			if (*str1 < *str2)
				return (-1);
			else
				return (1);
		}
		str1++;
		str2++;
	}
	return (0);
}

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
size_t	ft_strlen_bonus(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

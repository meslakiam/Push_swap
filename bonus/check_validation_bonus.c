/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validation_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeslaki <imeslaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:13:04 by imeslaki          #+#    #+#             */
/*   Updated: 2025/01/28 19:08:07 by imeslaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static char	*check_sign(char *str)
{
	int		i;
	char	*check;

	i = 0;
	check = "no";
	if (ft_isdigit_bonus(str[i]) == 1 || ft_isdigit_bonus(str[i + 1]) == 1)
	{
		i++;
		while (str[i])
		{
			if (ft_isdigit_bonus(str[i]) == 0)
			{
				check = "no";
				return (check);
			}
			i++;
		}
		check = "yes";
	}
	return (check);
}

char	*check_validation_bonus(char **str)
{
	int		i;
	int		j;
	char	*check;

	i = 0;
	while (str[i])
	{
		check = "no";
		j = 0;
		while (str[i][j])
		{
			if ((ft_isdigit_bonus(str[i][j]) == 0) && (str[i][j] != '-'
					&& str[i][j] != '+'))
				return (check);
			j++;
		}
		check = check_sign(str[i]);
		if (ft_strcmp_bonus(check, "no") == 0)
			return (check);
		i++;
	}
	return (check);
}
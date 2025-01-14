#include "push_swap.h"

long long   ft_atoll(const char *str)
{
	int	s;
	int	i;
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
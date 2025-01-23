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
int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}
int	ft_strcmp(char *s1,char *s2)
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
char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc(ft_strlen(s1) + 1);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:23:14 by mouarsas          #+#    #+#             */
/*   Updated: 2022/05/21 17:23:20 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

long long	ft_atoi(const char *str)
{
	int			i;
	long long	result;
	int			signe;

	i = 0;
	result = 0;
	signe = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			signe *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * signe);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*lol1;
	unsigned char	*lol2;
	int				i;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	lol1 = (unsigned char *)src;
	lol2 = (unsigned char *)dst;
	while (n > 0)
	{
		lol2[i] = lol1[i];
		n--;
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	l1;
	size_t	l2;

	if (!s1)
		return ((char *)s2);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	result = (char *)malloc(l1 + l2 + 1);
	if (result != NULL)
	{
		ft_memcpy(result, s1, l1);
		ft_memcpy(result + l1, s2, l2 + 1);
	}
	return (result);
}

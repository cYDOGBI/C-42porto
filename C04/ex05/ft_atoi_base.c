/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:25:24 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/30 15:57:32 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (*str == '\0')
		return (0);
	while (*(str + len))
		len++;
	return (len);
}

int	check_base(char *base)
{
	int		len;
	char	*l;

	len = ft_strlen(base);
	if (len <= 1)
		return (1);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (1);
		l = base + 1;
		while (*l)
		{
			if (*base == *l)
				return (1);
			l++;
		}
		base++;
	}
	return (0);
}

int	check_digit(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

int	get_digit_pos(char c, char *base)
{
	char	*ptr;

	ptr = base;
	while (*ptr)
	{
		if (c == *ptr)
			return (ptr - base);
		ptr++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_len;

	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	if (check_base(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (check_digit(*str, base))
	{
		result = (result * base_len) + get_digit_pos(*str, base);
		str++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("1010", "01"));
	printf("%d\n", ft_atoi_base("410", "0123456789"));
	printf("%d\n", ft_atoi_base("0", "0123456789"));
	printf("%d\n", ft_atoi_base("0", "01"));
	printf("%d\n", ft_atoi_base("0101", "01"));
	printf("%d\n", ft_atoi_base("   ----0101", "01"));
	printf("%d\n", ft_atoi_base("+A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("--B", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-C", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("141", "0123456789ABCDEF"));
	return (0);
}

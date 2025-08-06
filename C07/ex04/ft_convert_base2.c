/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:39:01 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/06 10:52:08 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	get_digit_pos(char c, char *base);

int	ft_check_base(char *base)
{
	int		base_len;
	char	*c;

	base_len = ft_strlen(base);
	if (base_len <= 1)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		c = base + 1;
		while (*c)
		{
			if (*base == *c)
				return (0);
			c++;
		}
		base++;
	}
	return (1);
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

char	*invert_string(char *res)
{
	int		j;
	int		i;
	char	tmp;

	j = 0;
	i = 0;
	while (j < i / 2)
	{
		if (res[j] != '-')
		{
			tmp = res[j];
			res[j] = res[i - j - 1];
			res[i - j - 1] = tmp;
		}
		j++;
	}
	return (res);
}

int	ft_atoi_base_from(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_len;

	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (check_digit(*str, base))
	{
		result = (result * base_len) + get_digit_pos(*str, base);
		str++;
	}
	return (result * sign);
}

char	*ft_atoi_base_to(int nbr, char *base)
{
	char	*res;
	int		base_len;
	int		i;

	base_len = ft_strlen(base);
	res = malloc(33 * sizeof(char));
	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		res[i++] = '-';
	}
	if (nbr == 0)
		res[i++] = base[0];
	while (nbr > 0)
	{
		res[i++] = base[nbr % base_len];
		nbr /= base_len;
	}
	res[i] = '\0';
	return (invert_string(res));
}

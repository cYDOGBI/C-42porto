/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:24:27 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/29 09:24:29 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

/* int	main(void)
{
	printf("%d -- %d\n", atoi(""), ft_atoi(""));
	printf("%d -- %d\n", atoi("\t\t\t\t\t\t"), ft_atoi("\t\t\t\t\t\t"));
	printf("%d -- %d\n", atoi("42"), ft_atoi("42"));
	printf("%d -- %d\n", atoi("-4-2"), ft_atoi("-4-2"));
	printf("%d -- %d\n", atoi("  42"), ft_atoi("  42"));
	printf("%d -- %d\n", atoi("+123"), ft_atoi("+123"));
	printf("%d -- %d\n", atoi("-123"), ft_atoi("-123"));
	printf("%d -- %d\n", atoi("--123"), ft_atoi("--123"));
	printf("%d -- %d\n", atoi("abc42"), ft_atoi("abc42"));
	printf("%d -- %d\n", atoi("---+--+1234ab567"), ft_atoi("---+--+1234ab567"));
	printf("%d -- %d\n", atoi("\r\f\n890abcd1233"),
		ft_atoi("\r\f\n890abcd1233"));
	printf("%d -- %d\n", atoi("\t1233"), ft_atoi("\t1233"));
	printf("%d -- %d\n", atoi("\t-\t-1233"), ft_atoi("\t-\t-1233"));
	return (0);
} */

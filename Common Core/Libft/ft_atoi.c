/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:04:33 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 15:33:49 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res *= sign);
}

int	main(void)
{
	printf("atoi: %d, ft_atoi: %d\n", atoi("-1234"), ft_atoi("-1234"));
	printf("atoi: %d,   ft_atoi: %d\n", atoi("13a40"), ft_atoi("13a40"));
	printf("atoi: %d, ft_atoi: %d\n", atoi("1313abc"), ft_atoi("1313abc"));
	printf("atoi: %d, ft_atoi: %d\n", atoi("4023\\"), ft_atoi("4023\\"));
	return (0);
}

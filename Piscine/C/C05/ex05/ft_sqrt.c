/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:20:37 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/02 10:41:27 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (result <= nb / result)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d\n", ft_sqrt(7));
	printf("%d\n", ft_sqrt(15));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(-4));
	printf("%d\n", ft_sqrt(2147395600));
	return (0);
} */

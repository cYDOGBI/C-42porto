/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:48:46 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 00:48:42 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d\n", ft_sqrt(-25));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(23));
	return (0);
} */

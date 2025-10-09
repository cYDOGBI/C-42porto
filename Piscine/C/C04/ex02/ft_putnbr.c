/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:20:37 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/25 09:48:16 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write(char num)
{
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_write('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_write('0' + (nbr % 10));
}

/* int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-4242);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:34:35 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 11:55:41 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(int nb)
{
	write(1, &nb, 1);
} */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/* void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putchar(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	ft_foreach(arr, 5, &ft_putnbr);
	ft_putchar('\n');
	return (0);
} */

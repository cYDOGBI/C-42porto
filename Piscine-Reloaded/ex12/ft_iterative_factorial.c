/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:00:10 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 12:40:32 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
	else
		return (0);
}

/* int	main(void)
{
	int	nb;

	nb = 5;
	printf("Factorial of %d is %d\n", nb, ft_iterative_factorial(nb));
	return (0);
} */

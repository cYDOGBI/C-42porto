/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:00:07 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 16:00:41 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb >= 0 && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}

/* int	main(void)
{
	int	nb;

	nb = -79;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	nb = 31;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	nb = 0;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	nb = 1;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	nb = 2;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:00:17 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 00:49:01 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	printf("Antes\na: %d\nb: %d\n", a, b);
	ft_swap(&a, &b);
	printf("Depois\na: %d\nb: %d\n", a, b);
	return (0);
} */

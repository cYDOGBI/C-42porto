/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:40:28 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/22 11:16:20 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 2;
// 	printf("Before A: %d, Before B: %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("After A: %d, After B: %d\n", a, b);
// 	return (0);
// }

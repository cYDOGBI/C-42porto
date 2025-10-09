/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:56:57 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/22 11:56:59 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 2;
// 	printf("A: %d / B: %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Resultado da divisão: %d\nResto da divisão: %d\n", a, b);
// 	return (0);
// }

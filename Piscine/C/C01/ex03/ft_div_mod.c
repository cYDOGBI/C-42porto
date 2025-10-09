/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:19:52 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/22 11:19:56 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 5;
// 	b = 2;
// 	div = 0;
// 	mod = 0;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("A: %d / B: %d\n", a, b);
// 	printf("Resultado da divisão: %d\nResto da divisão: %d\n", div, mod);
// 	return (0);
// }

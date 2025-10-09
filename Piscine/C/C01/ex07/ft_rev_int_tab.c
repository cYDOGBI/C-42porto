/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:24:57 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/22 13:25:00 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		i;

	temp = 0;
	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	numbers[5];
// 	int	size;
// 	int	i;

// 	i = 0;
// 	size = 5;
// 	numbers[0] = 1;
// 	numbers[1] = 2;
// 	numbers[2] = 3;
// 	numbers[3] = 4;
// 	numbers[4] = 5;
// 	ft_rev_int_tab(numbers, size);
// 	while (i < size)
// 	{
// 		printf("%d", numbers[i]);
// 		i++;
// 	}
// 	return (0);
// }

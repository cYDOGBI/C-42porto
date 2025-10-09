/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:14:44 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/22 14:14:48 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		temp;
	int		sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}

// int	main(void)
// {
// 	int	tab[5];
// 	int	size;
// 	int	i;

// 	i = 0;
// 	size = 5;
// 	tab[0] = 5;
// 	tab[1] = 4;
// 	tab[2] = 3;
// 	tab[3] = 2;
// 	tab[4] = 1;
// 	ft_sort_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }

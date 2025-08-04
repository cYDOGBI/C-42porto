/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:38:48 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/04 13:50:15 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (-1);
	*range = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (**range);
}

int	main(void)
{
	int	r;
	int	max;
	int	*range;
	int	i;

	max = 20;
	r = ft_ultimate_range(&range, 0, max);
	i = 0;
	while (i < max)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:38:48 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/05 17:25:31 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;
	int	size;

	min = 0;
	max = 10;
	i = 0;
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}

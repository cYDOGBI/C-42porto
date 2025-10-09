/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:03:14 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 00:57:28 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	i = 0;
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (min >= max)
		return (NULL);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/* int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*arr;

	i = 0;
	min = 1;
	max = 10;
	arr = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
} */

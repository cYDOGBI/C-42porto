/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:38:45 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/05 12:37:44 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
		return (NULL);
	ptr = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
		ptr[i++] = min++;
	return (ptr);
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 0;
	max = 10;
	range = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}

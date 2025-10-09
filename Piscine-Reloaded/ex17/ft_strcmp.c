/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:39:05 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 11:16:21 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	printf("ft_strcmp: %d strcmp: %d\n", ft_strcmp("3", "3"), strcmp("3","3"));
	printf("ft_strcmp: %d strcmp: %d\n", ft_strcmp("3", "2"), strcmp("3","2"));
	printf("ft_strcmp: %d strcmp: %d\n", ft_strcmp("1", "3"), strcmp("1","3"));
	return (0);
} */

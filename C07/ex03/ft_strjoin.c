/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:38:52 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/05 11:58:10 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	total_len += ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		c1;
	int		c2;
	char	*dest;

	dest = (char *)malloc(ft_total_len(size, strs, sep) + 1);
	i = 0;
	c2 = 0;
	while (i < size)
	{
		c1 = 0;
		while (strs[i][c1])
			dest[c2++] = strs[i][c1++];
		if (i < size - 1)
		{
			c1 = 0;
			while (sep[c1])
				dest[c2++] = sep[c1++];
		}
		i++;
	}
	return (dest);
}

int	main(void)
{
	int		size;
	char	*strs[2];

	size = 2;
	strs[0] = "Hello";
	strs[1] = "World";
	printf("%s\n", ft_strjoin(size, strs, "-"));
	return (0);
}

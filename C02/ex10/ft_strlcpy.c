/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:52:23 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/24 09:48:50 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}

/* int	main(void)
{
	char			src[6];
	char			dest[6];
	unsigned int	size;

	strcpy(src, "Hello, world!");
	size = ft_strlcpy(dest, src, sizeof(dest));
	printf("Dest: \"%s\", Size: %u\n", dest, size);
	return (0);
} */

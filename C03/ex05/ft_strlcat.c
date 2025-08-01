/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:20:37 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/25 09:48:16 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = 0;
	src_size = 0;
	i = 0;
	while (dest[dest_size] && dest_size < size)
		dest_size++;
	while (src[src_size])
		src_size++;
	if (dest_size == size)
		return (size + src_size);
	while (src[i] && (dest_size + i) < (size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (dest_size + i < size)
		dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
/*
int	main(void)
{
	char	src[10];
	char	dest[10];

	strcpy(src, "porto");
	strcpy(dest, "42");
	printf("Valor retornado: %d\n", ft_strlcat(dest, src, 2));
	printf("Tamanho do buffer: %lu\n", strlen(dest));
	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest);
	return (0);
}*/

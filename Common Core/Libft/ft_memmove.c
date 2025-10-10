/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:00:53 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 17:40:54 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Remove this function
void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*src_ptr;
	char	*dest_ptr;

	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	while (size--)
		*dest_ptr++ = *src_ptr++;
	return (dest_ptr);
}

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*src_ptr;
	char	*dest_ptr;

	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	if (dest_ptr < src_ptr)
	{
		while (size--)
			*dest_ptr++ = *src_ptr++;
	}
	else
	{
		dest_ptr += size;
		src_ptr += size;
		while (size--)
			*--dest_ptr = *--src_ptr;
	}
	return (dest_ptr);
}

int	main(void)
{
	char	*buffer1;
	char	*buffer2;

	buffer1 = "abcdef";
	buffer2 = "abcdef";
	ft_memcpy(buffer1 + 2, buffer1, 4);
	ft_memmove(buffer2 + 2, buffer2, 4);
	printf("Resultado com memcpy:  %s\n", buffer1);
	printf("Resultado com memmove: %s\n", buffer2);
	return (0);
}

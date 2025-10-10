/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:24:14 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 17:39:03 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello World!";
	s2 = "Hello";
	printf("Value of b before calling ft_memcpy: %s\n", s2);
	ft_memcpy(s2, s1, sizeof(s1));
	printf("Value of b after calling ft_memcpy: %s\n", s2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:28:50 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 17:36:25 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_memchr(const void *src, int c, size_t size)
{
	char	*src_ptr;

	src_ptr = (char *)src;
	while (size--)
	{
		if (*src_ptr == c)
			return (src_ptr);
		src_ptr++;
	}
	return (NULL);
}

int	main(void)
{
	char	*string;
	char	*str;

	string = "Hello World!";
	str = ft_memchr(string, 'o', 12);
	if (str != NULL)
		printf("%s\n", str);
	return (0);
}

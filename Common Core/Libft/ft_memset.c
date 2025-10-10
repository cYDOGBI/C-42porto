/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:12:50 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 17:42:19 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t size)
{
	char	*s_ptr;

	s_ptr = (char *)s;
	while (size--)
		*s_ptr++ = c;
	return (s_ptr);
}

int	main(void)
{
	char	*str;

	str = "Hello World";
	printf("Before memset(): %s\n", str);
	ft_memset(str + 6, '-', 5 * sizeof(char));
	printf("After memset():  %s\n", str);
	return (0);
}

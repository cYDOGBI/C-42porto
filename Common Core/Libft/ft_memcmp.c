/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:52:22 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 17:37:47 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	char	*s1_ptr;
	char	*s2_ptr;

	s1_ptr = (char *)s1;
	s2_ptr = (char *)s2;
	while (size--)
	{
		if (*s1_ptr != *s2_ptr)
			return (*s1_ptr++ - *s2_ptr++);
		s1_ptr++;
		s2_ptr++;
	}
	return (0);
}

int	main(void)
{
	int		res;
	int		size;
	char	*s1;
	char	*s2;

	size = 0;
	s1 = "Hello ";
	s2 = "Hello";
	while (s1[size])
		size++;
	res = ft_memcmp(s1, s2, size + 1);
	if (res > 0)
		printf("s1 is greater\n");
	else if (res < 0)
		printf("s2 is greater\n");
	else
		printf("Both are equal\n");
	return (0);
}

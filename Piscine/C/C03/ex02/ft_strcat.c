/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:20:37 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/04 15:08:42 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[10];
	char	dest[10];

	strcpy(src, "porto");
	strcpy(dest, "42");
	printf("Src: %s\n", src);
	printf("Dest: %s\n", ft_strcat(dest, src));
	return (0);
}*/

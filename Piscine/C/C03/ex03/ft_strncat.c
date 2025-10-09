/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:20:37 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/25 09:48:16 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr)
		dest_ptr++;
	while (nb-- && *src)
		*dest_ptr++ = *src++;
	*dest_ptr = '\0';
	return (dest);
}

int	main(void)
{
	char	src[10];
	char	dest[10];

	strcpy(src, "porto");
	strcpy(dest, "42");
	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest);
	printf("Rest: %s\n", ft_strncat(dest, src, 1));
	return (0);
}

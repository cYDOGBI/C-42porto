/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:20:37 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/25 09:48:16 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/* int	main(void)
{
	char	str[10];

	strcpy(str, "ABC");
	printf("Src: %s\n", str);
	printf("Len: %d\n", ft_strlen(str));
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:52:23 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/23 09:52:27 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	ascii;
	int	i;

	i = 0;
	while (str[i])
	{
		ascii = str[i];
		if (ascii >= 65 && ascii <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	string1[10];

	strcpy(string1, "STR");
	printf("Antes: %s\n", string1);
	printf("Depois: %s\n", ft_strlowcase(string1));
	return (0);
} */

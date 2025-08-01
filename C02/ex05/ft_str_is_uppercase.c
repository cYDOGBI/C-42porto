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

int	ft_str_is_uppercase(char *str)
{
	int	ascii;
	int	i;

	i = 0;
	while (str[i])
	{
		ascii = str[i];
		if (!(ascii >= 65 && ascii <= 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	string1[5];
	char	string2[5];
	char	string3[5];
	char	string4[5];
	char	string5[5];

	strcpy(string1, "ABCD");
	strcpy(string2, "abcd");
	strcpy(string3, "AbCd");
	strcpy(string4, "1234");
	strcpy(string5, "");
	printf("String1: %d\n", ft_str_is_uppercase(string1));
	printf("String2: %d\n", ft_str_is_uppercase(string2));
	printf("String3: %d\n", ft_str_is_uppercase(string3));
	printf("String4: %d\n", ft_str_is_uppercase(string4));
	printf("String5: %d\n", ft_str_is_uppercase(string5));
	return (0);
} */

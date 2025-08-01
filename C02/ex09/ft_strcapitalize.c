/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:52:23 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/24 14:47:45 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	is_low(char l)
{
	int	ascii;

	ascii = l;
	return (ascii >= 97 && ascii <= 122);
}

int	is_up(char l)
{
	int	ascii;

	ascii = l;
	return (ascii >= 65 && ascii <= 90);
}

int	is_sign(char l)
{
	int	ascii;

	ascii = l;
	if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
	{
		return (0);
	}
	if (ascii >= 48 && ascii <= 57)
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_up(str[i]))
		{
			str[i] = str[i] + 32;
		}
		if (i == 0 && is_low(str[i]))
		{
			str[i] = str[i] - 32;
		}
		else if (is_low(str[i]) && is_sign(str[i - 1]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	string1[100];

	strcpy(string1,
		"oLa, tudo bem? 42palavras "
		"quarenta-e-duas; cinquenta+e+um");
	printf("Antes: %s\n", string1);
	printf("Depois: %s\n", ft_strcapitalize(string1));
	return (0);
} */

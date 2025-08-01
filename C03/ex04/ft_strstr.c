/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:20:37 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/25 09:48:16 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		f = 0;
		while (str[i + f] == to_find[f] && to_find[f])
			f++;
		if (to_find[f] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[10];
	char	to_find[10];

	strcpy(str, "porto");
	strcpy(to_find, "r");
	printf("Src: %s\n", str);
	printf("To find: %s\n", to_find);
	printf("Dest: %s\n", ft_strstr(str, to_find));
	return (0);
}*/

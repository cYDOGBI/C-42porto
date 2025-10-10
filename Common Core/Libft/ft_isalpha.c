/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:04:58 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 17:35:00 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	main(void)
{
	char	*str;
	int		i;
	int		alphabet;

	str = "13abc13";
	i = 0;
	alphabet = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]) != 0)
			alphabet++;
		i++;
	}
	printf("Letters = %d\n", alphabet);
	return (0);
}

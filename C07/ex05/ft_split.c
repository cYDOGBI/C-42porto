/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:39:06 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/05 18:02:21 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **ft_split(char *str, char *charset)
{
	(void)charset;
	while (*str)
    {
		
		str++;
	}
	return (0);
}

int	main(void)
{
	char *str = "abc--def+ghi*jkl";
	char *charset = "-+*";
	ft_split(str, charset);
	//printf("%s\n", ft_split(str, charset));
	return (0);
}
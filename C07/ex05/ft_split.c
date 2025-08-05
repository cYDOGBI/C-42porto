/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:39:06 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/06 00:23:43 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int is_in_charset(char c, char *charset)
{
    int i;
	
	i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return 1;
        i++;
    }
    return 0;
}

char **ft_split(char *str, char *charset)
{
	int	i;
	int	c;
	char *result;

	i = 0;
	c = 0;
	while (str[i])
    {
		if (is_in_charset(str[i], charset))
        {
			
        }
		i++;
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
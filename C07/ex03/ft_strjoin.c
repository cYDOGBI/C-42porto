/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:38:52 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/04 17:39:00 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int	len = 0;
    while (str[len])
        len++;
    return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		l;
	int		j;
	int		total_len;
	char	*dest;

	if (size == 0)
		return ((char *)malloc(1));
	i = 0;
	j = 0;
	l = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	dest = (char *)malloc(total_len + 1);
	i = 0;
	l = 0;
	while (i < size)
    {
        j = 0;
        while (strs[i][j])
            dest[l++] = strs[i][j++];
        if (i < size - 1)
        {
            j = 0;
            while (sep[j])
                dest[l++] = sep[j++];
        }
        i++;
    }
    dest[l] = '\0';
	return (dest);
}

int	main(void)
{
	int	size;
	char *strs[2];

	size = 2;
	strs[0] = "Hello";
	strs[1] = "World";
    printf("%s\n", ft_strjoin(size, strs, "-"));
	return(0);
}

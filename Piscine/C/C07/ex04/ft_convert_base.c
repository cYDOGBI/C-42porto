/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:38:55 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/05 17:47:04 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi_base_from(char *str, char *base);
char	*ft_atoi_base_to(int nbr, char *base);
int		ft_check_base(char *base);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	get_digit_pos(char c, char *base)
{
	char	*ptr;

	ptr = base;
	while (*ptr)
	{
		if (c == *ptr)
			return (ptr - base);
		ptr++;
	}
	return (-1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*result;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	nb = ft_atoi_base_from(nbr, base_from);
	result = ft_atoi_base_to(nb, base_to);
	return (result);
}

int	main(void)
{
	printf("%s\n", ft_convert_base("  +++1011", "01", "0123456789"));
	printf("%s\n", ft_convert_base("   ---+--+42", "0123456789", "01"));
	printf("%s\n", ft_convert_base("777", "01234567", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base("42", "0123456789", "poneyvif"));
	printf("%s\n", ft_convert_base("255", "0123456789", "01234567"));
	return (0);
}

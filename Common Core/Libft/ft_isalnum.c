/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:30:33 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 17:32:14 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

int	main(void)
{
	char	c;

	c = 'A';
	printf("%c is alphanumeric: %d\n", c, ft_isalnum(c));
	c = '1';
	printf("%c is alphanumeric: %d\n", c, ft_isalnum(c));
	c = '-';
	printf("%c is alphanumeric: %d\n", c, ft_isalnum(c));
	return (0);
}

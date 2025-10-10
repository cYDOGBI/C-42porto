/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:01:21 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 14:32:49 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	main(void)
{
	char	c;

	c = 'a';
	printf("%c is in ascii table: %d\n", c, ft_isascii(c));
	c = 'A';
	printf("%c is in ascii table: %d\n", c, ft_isascii(c));
	c = '1';
	printf("%c is in ascii table: %d\n", c, ft_isascii(c));
	c = '9';
	printf("%c is in ascii table: %d\n", c, ft_isascii(c));
	c = '!';
	printf("%c is in ascii table: %d\n", c, ft_isascii(c));
	c = '?';
	printf("%c is in ascii table: %d\n", c, ft_isascii(c));
	return (0);
}

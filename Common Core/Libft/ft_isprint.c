/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:16:44 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 14:35:07 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

int	main(void)
{
	char	c;

	c = ' ';
	printf("%c is printable: %d\n", c, ft_isprint(c));
	c = 'A';
	printf("%c is printable: %d\n", c, ft_isprint(c));
	c = '1';
	printf("%c is printable: %d\n", c, ft_isprint(c));
	c = '9';
	printf("%c is printable: %d\n", c, ft_isprint(c));
	c = '!';
	printf("%c is printable: %d\n", c, ft_isprint(c));
	c = '?';
	printf("%c is printable: %d\n", c, ft_isprint(c));
	return (0);
}

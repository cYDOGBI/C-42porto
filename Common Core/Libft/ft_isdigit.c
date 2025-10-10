/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:16:20 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/10 17:31:04 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
	char	c;

	c = 'a';
	printf("%c is a disgit: %d\n", c, ft_isdigit(c));
	c = 'A';
	printf("%c is a disgit: %d\n", c, ft_isdigit(c));
	c = '1';
	printf("%c is a disgit: %d\n", c, ft_isdigit(c));
	c = '9';
	printf("%c is a disgit: %d\n", c, ft_isdigit(c));
	c = '!';
	printf("%c is a disgit: %d\n", c, ft_isdigit(c));
	c = '?';
	printf("%c is a disgit: %d\n", c, ft_isdigit(c));
	return (0);
}

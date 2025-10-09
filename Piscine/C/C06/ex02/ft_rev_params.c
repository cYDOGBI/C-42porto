/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:41:31 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/04 11:59:57 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ar, char **av)
{
	int	i;
	int	len;

	i = ar - 1;
	while (i > 0)
	{
		len = 0;
		while (av[i][len])
			len++;
		write(1, av[i], len);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:11:14 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/04 11:59:06 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ar, char **av)
{
	int	i;
	int	len;

	i = 1;
	while (i < ar)
	{
		len = 0;
		while (av[i][len])
			len++;
		write(1, av[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

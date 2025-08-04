/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:00:51 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/04 10:51:18 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ar, char **av)
{
	int	len;

	(void)ar;
	len = 0;
	while (av[0][len])
		len++;
	write(1, av[0], len);
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:00:51 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/02 11:07:37 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ar, char **av)
{
	int i;

	i = 0;
	if (ar == 1)
	{
		while (av[0][i] != '\0')
		{
			write(1, &av[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

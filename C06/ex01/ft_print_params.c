/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:11:14 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/02 11:45:18 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ar, char **av)
{
	int i;
	int j;
	printf("ar - %d\n", ar);
	if (ar == 4)
	{		
		j = 1;
		i = 0;
		while (ar > j)
		
		while (av[j][i])
		{
			printf("i - %d : j - %d\n", i, j);
			//write(1, &av[j][i], 1);					
			i++;
		}
		j++;
		
		write(1, "\n", 1);
	}
	return (0);
}
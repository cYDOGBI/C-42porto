/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:17:08 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/21 11:50:05 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	ft_write(n / 10 + '0');
	ft_write(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_number(a);
			ft_write(' ');
			ft_print_number(b);
			if (!(a == 98 && b == 99))
			{
				ft_write(',');
				ft_write(' ');
			}
			b++;
		}
		a++;
	}
}

/* int	main(void)
{ 	
	ft_print_comb2(); 	
	return (0);
} */

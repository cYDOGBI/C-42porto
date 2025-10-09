/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:57:02 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 15:28:32 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	while (i < argc)
	{
		c = 0;
		while (argv[i][c])
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:28:38 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 15:44:53 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_args(int argc, char **argv)
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
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_args(int argc, char **argv)
{
	int		i;
	int		c;
	char	*temp;

	i = 1;
	while (i <= argc - 1)
	{
		c = i + 1;
		while (c < argc)
		{
			if (ft_strcmp(argv[i], argv[c]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[c];
				argv[c] = temp;
			}
			c++;
		}
		i++;
	}
}

//This is a program
int	main(int argc, char **argv)
{
	ft_sort_args(argc, argv);
	ft_print_args(argc, argv);
	return (0);
}

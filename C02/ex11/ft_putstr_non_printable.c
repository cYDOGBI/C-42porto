/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_putstr_non_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:52:23 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/24 13:52:36 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_write(char str)
{
	write(1, &str, 1);
}

void	ft_hex(unsigned char str)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_write(hex[str / 16]);
	ft_write(hex[str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		ascii;
	int		i;

	i = 0;
	while (str[i])
	{
		ascii = str[i];
		if ((ascii >= 32 && ascii <= 126))
		{
			ft_write(str[i]);
		}
		else
		{
			ft_write('\\');
			ft_hex(str[i]);
		}
		i++;
	}
}

/* int	main(void)
{
	char	string[5];

	strcpy(string, "Ola\nesta bem?");
	ft_putstr_non_printable(string);
	return (0);
} */

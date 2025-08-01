/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:24:58 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/29 09:25:02 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (*str == '\0')
		return (0);
	while (*(str + len))
		len++;
	return (len);
}

int	check_base(char *base)
{
	int		len;
	char	*l;

	len = ft_strlen(base);
	if (len <= 1)
		return (1);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (1);
		l = base + 1;
		while (*l)
		{
			if (*base == *l)
				return (1);
			l++;
		}
		base++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbl;
	int		base_len;

	nbl = nbr;
	base_len = ft_strlen(base);
	if (check_base(base))
		return ;
	if (nbl < 0)
	{
		ft_write('-');
		nbl = -nbl;
	}
	if (nbl >= base_len)
		ft_putnbr_base(nbl / base_len, base);
	ft_write(base[nbl % base_len]);
	return ;
}

/* int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	ft_write('\n');
	ft_putnbr_base(-42, "01");
	ft_write('\n');
	ft_putnbr_base(255, "0123456789ABCDEF");
	ft_write('\n');
	ft_putnbr_base(42, "poneyvif");
	ft_write('\n');
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:08:20 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/21 14:23:17 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write(int nb){
	write(1, &nb, 1);
}

void ft_putnbr(int nb){
	if (nb == -2147483648){
		ft_write('-');
		ft_write('2');
		ft_putnbr(147483648);
	} 
	if (nb < 0){
		ft_write('-');
		nb = -nb;
	}
	if (nb >= 10){
		ft_write(nb / 10);
	}
	ft_write(nb % 10 + '0');
    
}

int main(void){
	ft_putnbr(42);
	ft_write('\n');
	//ft_putnbr(-2147483648);
	ft_write('\n');
	//ft_putnbr(-12345);
	ft_write('\n');
	//ft_putnbr(0);
	return 0;
}

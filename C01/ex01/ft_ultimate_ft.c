/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:18:44 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/21 16:18:48 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_pointer_p1(int ****p4)
{
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
	int	*********p9;

	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_ultimate_ft(p9);
}

// int	main(void)
// {
// 	int	x;
// 	int	*p1;
// 	int	**p2;
// 	int	***p3;
// 	int	****p4;

// 	x = 0;
// 	p1 = &x;
// 	p2 = &p1;
// 	p3 = &p2;
// 	p4 = &p3;
// 	ft_pointer_p1(p4);
// 	printf("x is now: %d\n", x);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:34:35 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 11:55:18 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(int nb)
{
	write(1, &nb, 1);
}

int	ft_strlen(char *arr)
{
	int	len;

	len = 0;
	while (arr[len])
		len++;
	ft_putchar(len);
	return (len);
}

int	is_non_empty(char *str)
{
	return (str[0] != '\0');
} */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/* int	main(void)
{
    char *arr[] = {"a", "", "b", "c", "", NULL};
    int result = ft_count_if(arr, &is_non_empty);
    ft_putchar(result + '0'); // convert int to char
    ft_putchar('\n');
    return (0);
} */

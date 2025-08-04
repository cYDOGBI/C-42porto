/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:00:51 by tlaranje          #+#    #+#             */
/*   Updated: 2025/08/04 01:00:31 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	(void)argc;
    int len = 0;

    while (argv[0][len])
        len++;
    write(1, argv[0], len);
    write(1, "\n", 1);
    return 0;
}


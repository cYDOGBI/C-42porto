/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:20:32 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/09 10:49:55 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_read(int bytes, int fd)
{
	char	buffer[1024];

	bytes = read(fd, buffer, 1024);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, 1024);
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes_read;

	bytes_read = 0;
	fd = 0;
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ft_read(bytes_read, fd);
	close(fd);
	return (0);
}

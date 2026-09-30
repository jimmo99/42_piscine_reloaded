/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:25:21 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/09/28 18:25:28 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putstr_fd(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int	display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd(2, "Cannot read file.\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		write(1, buf, ret);
		ret = read(fd, buf, BUF_SIZE);
	}
	close(fd);
	if (ret < 0)
	{
		ft_putstr_fd(2, "Cannot read file.\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_fd(2, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr_fd(2, "Too many arguments.\n");
		return (1);
	}
	return (display_file(argv[1]));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:04:45 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 17:27:22 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	test_putnbr()
{
	int res;
	int	fd;
	char *s;

	res = 0;
	print_header("ft_putnbr_fd\n");
	fd = open("tmp", O_RDWR | O_CREAT);
	ft_putnbr_fd(42, fd);
	s = ft_calloc(3, sizeof(*s));
	read(fd, s, 2);
	close(fd);
	if (!strcmp(s, "42"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	fd = open("tmp", O_RDWR | O_CREAT);
	ft_putnbr_fd(-42, fd);
	s = ft_calloc(4, sizeof(*s));
	read(fd, s, 3);
	close(fd);
	if (!strcmp(s, "42"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	fd = open("tmp", O_RDWR | O_CREAT);
	ft_putnbr_fd(34563725, fd);
	s = ft_calloc(9, sizeof(*s));
	read(fd, s, 8);
	close(fd);
	if (!strcmp(s, "34563725"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return (res);
}

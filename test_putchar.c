/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:04:45 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 17:16:16 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	test_putchar()
{
	int res;
	int	fd;
	char *s = "\0\0";

	res = 0;
	print_header("ft_putchar_fd\n");
	fd = open("tmp", O_RDWR | O_CREAT);
	ft_putchar_fd('o', fd);
	read(fd, s, 1);
	if (!strcmp(s, "o"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return (res);
}

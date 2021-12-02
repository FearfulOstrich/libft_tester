/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:04:45 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 17:27:36 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	test_putendl()
{
	int res;
	int	fd;
	char *s;

	res = 0;
	print_header("ft_putendl_fd\n");
	fd = open("tmp", O_RDWR | O_CREAT);
	ft_putendl_fd("toto", fd);
	s = ft_calloc(6, sizeof(*s));
	read(fd, s, 5);
	if (!strcmp(s, "toto\n"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return (res);
}

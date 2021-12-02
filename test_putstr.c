/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:04:45 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 17:27:44 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	test_putstr()
{
	int res;
	int	fd;
	char *s;

	res = 0;
	print_header("ft_putstr_fd\n");
	fd = open("tmp", O_RDWR | O_CREAT);
	ft_putstr_fd("toto", fd);
	s = ft_calloc(5, sizeof(*s));
	read(fd, s, 4);
	if (!strcmp(s, "toto"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return (res);
}

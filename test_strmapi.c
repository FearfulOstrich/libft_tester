/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:16:12 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 16:50:34 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <string.h>

char	rot_n(unsigned int n, char c)
{
	if (c >= 'a' && c <= 'z')
		return (((c - 'a' + n) % 26) + 'a');
	if (c >= 'Z' && c <= 'Z')
		return (((c - 'A' + n) % 26) + 'A');
	else
		return (c);
}

char	add_n(unsigned int n, char c)
{
	return (c + (char) n);
}

int test_strmapi()
{
	int	res;

	res = 1;
	print_header("ft_strmapi\n");
	if (!strcmp(ft_strmapi("toto", &rot_n), "tpsr"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!strcmp(ft_strmapi("zyxwvutsrqponmlkjifedcba", &rot_n), "zzzzzzzzzzzzzzzzzzzzzzzzzz"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!strcmp(ft_strmapi("0000000000", &add_n), "0123456789"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return (res);
}


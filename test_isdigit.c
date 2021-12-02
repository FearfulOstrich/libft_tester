/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:58:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:36:39 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "tests.h"

int	test_isdigit()
{
	char	a = 'a';
	char	b = '0';
	char	c = '9';
	int		res;

	res = 1;
	print_header("ft_isdigit\n");
	if (ft_isdigit(a))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!ft_isdigit(b))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!ft_isdigit(c))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

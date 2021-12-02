/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:56:19 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:37:01 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "tests.h"

int test_isascii()
{
	char	a = 'a';
	char	b = '0';
	char	c = 9;
	char	d = -120;
	int res;

	res = 1;
	print_header("ft_isascii\n");
	if (!ft_isascii(a))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!ft_isascii(b))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!ft_isascii(c))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_isascii(d))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

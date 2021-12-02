/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:05:42 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:02:21 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "tests.h"

int test_isalnum()
{
	char	a = 'a';
	char	b = '0';
	char	c = 'P';
	char	d = '.';
	int res;

	res = 1;
	print_header("ft_isalnum\n");
	if (!ft_isalnum(a))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!ft_isalnum(b))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!ft_isalnum(c))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_isalnum(d))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

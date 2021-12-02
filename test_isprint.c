/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:04:48 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:37:33 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "tests.h"

int test_isprint()
{
	char	a = 'a';
	char	b = '0';
	char	c = '\n';
	char	d = 127;
	int res;

	res = 1;
	print_header("ft_isprint\n");
	if (!ft_isprint(a))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (!ft_isprint(b))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_isprint(c))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_isprint(d))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:56:19 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 12:14:15 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "tests.h"

int test_isalpha()
{
	char	a = 'a';
	char	b = '0';
	char	c = 9;
	int res;

	res = 1;
	print_header("ft_isalpha\n");
	if (!ft_isalpha(a))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_isalpha(b))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_isalpha(c))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

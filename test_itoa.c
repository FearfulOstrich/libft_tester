/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 18:24:21 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_itoa()
{
	int res;

	res = 1;
	print_header("ft_itoa\n");
	if (strcmp(ft_itoa(42), "42"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_itoa(-42), "-42"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_itoa(39825463), "39825463"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_itoa(0), "0"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:22:18 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:38:41 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include "tests.h"

int test_toupper()
{
	int res;

	res = 1;
	print_header("ft_toupper\n");
	if (ft_toupper('o') != toupper('o'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_toupper('L') != toupper('L'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_toupper('0') != toupper('0'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_toupper('u') != toupper('u'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:24:36 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:35:24 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include "tests.h"

int test_tolower()
{
	int res;

	res = 1;
	print_header("ft_tolower\n");
	if (ft_tolower('o') != tolower('o'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_tolower('L') != tolower('L'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_tolower('\n') != tolower('\n'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_tolower('U') != tolower('U'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 10:19:15 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strnstr()
{
	int res;

	res = 1;
	print_header("ft_strnstr\n");
	if (strcmp(ft_strnstr("Bonsoir", "ns", 5), strnstr("Bonsoir", "ns", 5)))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strnstr("Bonsoir", "io", 7) != strnstr("Bonsoir", "io", 7))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strnstr("Bonsoir", "Bonsoire", 7) != strnstr("Bonsoir", "Bonsoire", 7))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strnstr("Bonsoir", "Bonsoire", 8) != strnstr("Bonsoir", "Bonsoire", 8))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strnstr("Bonsoir", "so", 4) != strnstr("Bonsoir", "so", 4))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strnstr("Bonsoir", "Bo", 1) != strnstr("Bonsoir", "Bo", 1))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strnstr("Bonsoir", "Bo", 2) != strnstr("Bonsoir", "Bo", 2))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strnstr("", "B", 2) != strnstr("", "B", 2))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strnstr("Bonsoir", "Bon", 0) != strnstr("Bonsoir", "Bon", 0))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strnstr("Bonsoir", "", 7), strnstr("Bonsoir", "", 7)))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

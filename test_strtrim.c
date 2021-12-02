/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 12:13:37 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strtrim()
{
	int res;

	res = 1;
	print_header("ft_strtrim\n");
	if (strcmp(ft_strtrim("Bonsoir", "Bon"), "soir"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strtrim("Bonsoir", "soir"), "Bon"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strtrim("", "soir"), ""))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strtrim("yocoucouyo", "yo"), "coucou"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strtrim("eee", "ee"), ""))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strtrim("eeee", "ee"), ""))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strtrim("e", ""), "e"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

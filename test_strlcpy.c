/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:25:29 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strlcpy()
{
	int 	res;
	char	str[8] = "Bonjour";
	char	str_ref[8] = "Bonjour";
	size_t	cpy;
	size_t	cpy_ref;

	res = 1;
	print_header("ft_strlcpy\n");
	cpy = ft_strlcpy(str, "Bonsoir", 8);
	cpy_ref = strlcpy(str_ref, "Bonsoir", 8);
	if (strcmp(str, str_ref))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (cpy != cpy_ref)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	cpy = ft_strlcpy(str, "Bon", 8);
	cpy_ref = strlcpy(str_ref, "Bon", 8);
	if (strcmp(str, str_ref))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (cpy != cpy_ref)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	cpy = ft_strlcpy(str, "Bonne journee", 8);
	cpy_ref = strlcpy(str_ref, "Bonne journee", 8);
	if (strcmp(str, str_ref))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (cpy != cpy_ref)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	cpy = ft_strlcpy(str, "toto", 0);
	cpy_ref = strlcpy(str_ref, "toto", 0);
	if (strcmp(str, str_ref))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (cpy != cpy_ref)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return (res);
}

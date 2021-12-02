/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:23:45 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strlcat()
{
	int 	res;
	char	str[20] = "Bonjour";
	char	str_ref[20] = "Bonjour";
	size_t	cat;
	size_t	cat_ref;

	res = 1;
	print_header("ft_strlcat\n");
	cat = ft_strlcat(str, " soir", 20);
	cat_ref = strlcat(str_ref, " soir", 20);
	if (strcmp(str, str_ref))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (cat != cat_ref)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	cat = ft_strlcat(str, "oops", 10);
	cat_ref = strlcat(str_ref, "oops", 10);
	if (strcmp(str, str_ref))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (cat != cat_ref)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	cat = ft_strlcat(str, " ou matin...", 20);
	cat_ref = strlcat(str_ref, " ou matin...", 20);
	if (strcmp(str, str_ref))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (cat != cat_ref)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return (res);
}

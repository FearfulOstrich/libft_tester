/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:15:09 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_memcpy()
{
	int 	res;
	char	str[8] = "Bonjour";
	char	str_ref[8] = "Bonjour";
	int 	tab[10];
	int 	tab_ref[10];
	int 	cpt;

	res = 1;
	print_header("ft_memcpy\n");
	memcpy(str_ref, "soir", 3);
	ft_memcpy(str, "soir", 3);
	if (strcmp(str_ref, str))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	memcpy(str_ref, str_ref + 1, 3);
	ft_memcpy(str, str + 1, 3);
	if (strcmp(str_ref, str))
	{	
		res *= 0;
		print_test(0);
		print_test(0);
	}
	else
		print_test(1);
	cpt = 0;
	while (cpt < 10)
	{
		tab_ref[cpt] = cpt * 11;
		tab[cpt] = cpt * 11;
		cpt++;
	}
	memcpy(tab_ref, tab_ref + 2, 4);
	ft_memcpy(tab, tab + 2, 4);
	if (tab[2] != tab_ref[2])
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (tab[6] != tab_ref[6])
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:17:39 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_memset()
{
	int 	res;
	char	str[8] = "Bonjour";
	char	str_ref[8] = "Bonjour";
	int 	tab[10];
	int 	tab_ref[10];
	int 	cpt;

	res = 1;
	print_header("ft_memset\n");
	memset(str_ref, 765, 4);
	ft_memset(str, 765, 4);
	if (str_ref[0] != str[0])
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (str_ref[6] != str[6])
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	cpt = 0;
	while (cpt < 10)
	{
		tab_ref[cpt] = 77;
		tab[cpt++] = 77;
	}
	memset(tab_ref, 12, 4);
	ft_memset(tab, 12, 4);
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

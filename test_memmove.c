/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:16:27 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_memmove()
{
	int 	res;
	char	str[22] = "Bonjour tout le monde";
	char	str_ref[22] = "Bonjour tout le monde";
	int 	tab[10];
	int 	tab_ref[10];
	int 	cpt;

	res = 1;
	print_header("ft_memmove\n");
	memmove(str_ref + 4, str_ref, 7);
	ft_memmove(str + 4, str, 7);
	if (strcmp(str_ref, str))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	memmove(str_ref, str_ref + 1, 3);
	ft_memmove(str, str + 1, 3);
	if (strcmp(str_ref, str))
	{	
		res *= 0;
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
	memmove(tab_ref, tab_ref + 2, 4);
	ft_memmove(tab, tab + 2, 4);
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

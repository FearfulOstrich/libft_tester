/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 18:35:41 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_split()
{
	int res;
	char **tab;
	char s1[14] = "Coucou, c moi";
	char s2[4] = "Bon";
	char s3[2] = "i";

	res = 1;
	print_header("ft_split\n");
	tab = ft_split(s1, ',');
	if (strcmp(tab[0], "Coucou"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(tab[1], " c moi"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (tab[2] != 0)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	tab = ft_split(s2, ' ');
	if (strcmp(tab[0], "Bon"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (tab[1] != 0)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	tab = ft_split(s3, 'i');
	if (tab[0] != 0)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

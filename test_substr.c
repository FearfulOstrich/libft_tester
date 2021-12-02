/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 12:12:52 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_substr()
{
	int res;

	res = 1;
	print_header("ft_substr\n");
	if (strcmp(ft_substr("Bonsoir", 3, 4), "soir"))
	{/*1*/
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_substr("B", 4, 4) != 0)
	{/*2*/
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_substr("Bonsoir", 3, 1), "s"))
	{/*3*/
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_substr("Bonsoir", 3, 7), "soir"))
	{/*4*/
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

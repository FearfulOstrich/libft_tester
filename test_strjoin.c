/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 17:50:20 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strjoin()
{
	int res;

	res = 1;
	print_header("ft_strjoin\n");
	if (strcmp(ft_strjoin("Bon", "soir"), "Bonsoir"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strjoin("Bon", ""), "Bon"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(ft_strjoin("", ""), ""))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

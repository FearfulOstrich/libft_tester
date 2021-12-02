/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 10:13:43 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strrchr()
{
	int res;

	res = 1;
	print_header("ft_strrchr\n");
	if (ft_strrchr("Coucou !!", 'c') != strrchr("Coucou !!", 'c'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strrchr("Coucou !", 'o') != strrchr("Coucou !", 'o'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strrchr("", 'y') != strrchr("", 'y'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strrchr("Salut", 'n') != strrchr("Salut", 'n'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strrchr("Salut", '\0') != strrchr("Salut", '\0'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strrchr("Salut", 'l' + 255) != strrchr("Salut", 'l' + 255))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

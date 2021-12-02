/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 10:04:40 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strchr()
{
	int res;

	res = 1;
	print_header("ft_strchr\n");
	if (ft_strchr("Coucou !!", 'c') != strchr("Coucou !!", 'c'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strchr("Coucou !", 'o') != strchr("Coucou !", 'o'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strchr("", 'y') != strchr("", 'y'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strchr("Bonjour", 13) != strchr("Bonjour", 13))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strchr("Yo", '\0') != strchr("Yo", '\0'))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strchr("Yo", 'o' + 255) != strchr("Yo", 'o' + 255))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

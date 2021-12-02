/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:12:16 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_memchr()
{
	int 	res;
	char	str[8] = "Bonjour";
	int 	tab[1];

	res = 1;
	print_header("ft_memchr\n");
	if (ft_memchr(str, 'j', 8) != memchr(str, 'j', 8))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_memchr(str, 'j', 3) != memchr(str, 'j', 3))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_memchr(str, 'z', 8) != memchr(str, 'z', 8))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	tab[0] = 65706;
	if (ft_memchr(tab, 256, 4) != memchr(tab, 256, 4))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:09:24 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:27:50 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strlen()
{
	int res;

	res = 1;
	print_header("ft_strlen\n");
	if (ft_strlen("") != strlen(""))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strlen("Coucou....") != strlen("Coucou...."))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strlen("\n\n\n\n") != strlen("\n\n\n\n"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

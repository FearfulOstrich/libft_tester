/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:31:32 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "tests.h"

int test_strncmp()
{
	int res;

	res = 1;
	print_header("ft_strncmp\n");
	if (ft_strncmp("Bonsoir", "Bonsoir", 0) != strncmp("Bonsoir", "Bonsoir", 0))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strncmp("Bonsoir", "Bonsoir", 4) != strncmp("Bonsoir", "Bonsoir", 4))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strncmp("Bonsoir", "Bonjour", 5) != strncmp("Bonsoir", "Bonjour", 5))
	{	
		res *= 0;
		print_test(0);
		printf("\tmine - theirs | %d - %d\n", ft_strncmp("Bonsoir", "Bonjour", 5), strncmp("Bonsoir", "Bonjour", 5));
	}
	else
		print_test(1);
	if (ft_strncmp("Toto", "No", 4) != strncmp("Toto", "No", 4))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strncmp("Bonsoir", "Bonjour", 3) != strncmp("Bonsoir", "Bonjour", 3))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (ft_strncmp("", "", 3) != strncmp("", "", 3))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

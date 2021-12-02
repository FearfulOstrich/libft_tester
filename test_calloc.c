/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:41:23 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_calloc()
{
	int 	res;
	char	*str;
	int		*tab;
	
	res = 1;
	print_header("ft_calloc\n");
	str = ft_calloc(3, sizeof(*str));
	if (!str)
		printf("\tMemory error.\n");
	else
	{
		if (str[0] != 0 || str[1] != 0 || str[2] != 0)
		{	
			res *= 0;
			print_test(0);
		}
		else
			print_test(1);
		free(str);
	}
	tab = ft_calloc(3, sizeof(*tab));
	if (!str)
		printf("\tMemory error.\n");
	else
	{
		if (tab[0] != 0 || tab[1] != 0 || tab[2] != 0)
		{	
			res *= 0;
			print_test(0);
		}
		else
			print_test(1);
		free(tab);
	}
	return res;
}

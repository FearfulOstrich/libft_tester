/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/01 16:22:21 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests.h"

int test_strdup()
{
	int 	res;
	char	*str;
	char	*str_ref;

	res = 1;
	print_header("ft_strdup\n");
	str_ref = strdup("Bonsoir");
	str = ft_strdup("Bonsoir");
	if (strcmp(str_ref, str))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	free(str);
	free(str_ref);
	return res;
}

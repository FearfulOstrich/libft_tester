/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:56:19 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/24 15:28:12 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int test_isalpha()
{
	char	a = 'a';
	char	b = '0';
	char	c = 9;
	int res;

	res = 1;
	printf("ft_isalpha\n");
	if (!ft_isalpha(a))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_isalpha(b))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_isalpha(c))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	return res;
}

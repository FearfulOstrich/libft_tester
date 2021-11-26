/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:56:19 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/24 15:49:19 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int test_isascii()
{
	char	a = 'a';
	char	b = '0';
	char	c = 9;
	char	d = -120;
	int res;

	res = 1;
	printf("ft_isascii\n");
	if (!ft_isascii(a))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (!ft_isascii(b))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (!ft_isascii(c))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_isascii(d))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	return res;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:58:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/24 15:28:36 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	test_isdigit()
{
	char	a = 'a';
	char	b = '0';
	char	c = '9';
	int		res;

	res = 1;
	printf("ft_isdigit\n");
	if (ft_isdigit(a))
	{
		res *= 0;
		printf("\tOK.\n");
	}
	else
		printf("\tOK.\n");
	if (!ft_isdigit(b))
	{
		res *= 0;
		printf("\tOK.\n");
	}
	else
		printf("\tOK.\n");
	if (!ft_isdigit(c))
	{
		res *= 0;
		printf("\tOK.\n");
	}
	else
		printf("\tOK.\n");
	return res;
}

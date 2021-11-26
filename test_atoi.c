/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/25 10:23:12 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int test_atoi()
{
	int res;

	res = 1;
	printf("ft_atoi\n");
	if (ft_atoi("8376") != atoi("8376"))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_atoi(" -383") != atoi(" -383"))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_atoi("    ") != atoi("    "))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_atoi("42I am groot") != atoi("42I am groot"))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_atoi("-2147483648") != atoi("-2147483648"))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	return res;
}

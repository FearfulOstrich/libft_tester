/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/26 17:06:20 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	printf("ft_calloc\n");
	str = ft_calloc(3, sizeof(*str));
	if (!str)
		printf("\tMemory error.\n");
	else
	{
		if (str[0] != 0 || str[1] != 0 || str[2] != 0)
		{	
			res *= 0;
			printf("\tKO.\n");
		}
		else
			printf("\tOK.\n");
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
			printf("\tKO.\n");
		}
		else
			printf("\tOK.\n");
		free(tab);
	}
	return res;
}

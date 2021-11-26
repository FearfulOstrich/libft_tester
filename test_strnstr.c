/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/26 12:53:12 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int test_strnstr()
{
	int res;

	res = 1;
	printf("ft_strnstr\n");
	if (strcmp(ft_strnstr("Bonsoir", "ns", 5), strnstr("Bonsoir", "ns", 5)))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strnstr("Bonsoir", "io", 7) != strnstr("Bonsoir", "io", 7))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strnstr("Bonsoir", "Bonsoire", 7) != strnstr("Bonsoir", "Bonsoire", 7))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strnstr("Bonsoir", "Bonsoire", 8) != strnstr("Bonsoir", "Bonsoire", 8))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strnstr("Bonsoir", "so", 4) != strnstr("Bonsoir", "so", 4))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strnstr("Bonsoir", "Bo", 1) != strnstr("Bonsoir", "Bo", 1))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strnstr("", "B", 2) != strnstr("", "B", 2))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strnstr("Bonsoir", "Bon", 0) != strnstr("Bonsoir", "Bon", 0))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (strcmp(ft_strnstr("Bonsoir", "", 7), strnstr("Bonsoir", "", 7)))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	return res;
}

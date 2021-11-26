/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/26 10:25:55 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int test_memcmp()
{
	int 	res;
	char	str[8] = "Bonjour";
	char	str_ref[8] = "Bonjour";
	int 	tab[10];
	int 	tab_ref[10];
	int 	cpt;

	res = 1;
	printf("ft_memcmp\n");
	if (ft_memcmp(str, "Bonsoir", 3) != memcmp(str_ref, "Bonsoir", 3))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_memcmp(str, "Bonsoir", 4) != memcmp(str_ref, "Bonsoir", 4))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_memcmp(str, "Bonsoir", 9) != memcmp(str_ref, "Bonsoir", 9))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	cpt = 0;
	while (cpt < 10)
	{
		tab_ref[cpt] = cpt * 11;
		tab[cpt] = cpt * 11;
		cpt++;
	}
	if (ft_memcmp(tab, tab + 2, 4) != memcmp(tab_ref, tab_ref + 2, 4))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_memcmp(tab, tab, 4) != memcmp(tab_ref, tab_ref, 4))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	return res;
}

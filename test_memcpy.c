/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/25 12:48:24 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int test_memcpy()
{
	int 	res;
	char	str[8] = "Bonjour";
	char	str_ref[8] = "Bonjour";
	int 	tab[10];
	int 	tab_ref[10];
	int 	cpt;

	res = 1;
	printf("ft_memcpy\n");
	memcpy(str_ref, "soir", 3);
	ft_memcpy(str, "soir", 3);
	if (strcmp(str_ref, str))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	memcpy(str_ref, str_ref + 1, 3);
	ft_memcpy(str, str + 1, 3);
	if (strcmp(str_ref, str))
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
	memcpy(tab_ref, tab_ref + 2, 4);
	ft_memcpy(tab, tab + 2, 4);
	if (tab[2] != tab_ref[2])
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (tab[6] != tab_ref[6])
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	return res;
}

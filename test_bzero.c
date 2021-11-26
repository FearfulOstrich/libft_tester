/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/26 11:03:24 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int test_bzero()
{
	int 	res;
	char	str[8] = "Bonjour";
	char	str_ref[8] = "Bonjour";
	int 	tab[10];
	int 	tab_ref[10];
	int 	cpt;

	res = 1;
	printf("ft_bzero\n");
	bzero(str_ref, 4);
	ft_bzero(str, 4);
	if (str_ref[0] != str[0])
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (str_ref[6] != str[6])
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	cpt = 0;
	while (cpt < 10)
	{
		tab_ref[cpt] = 77;
		tab[cpt++] = 77;
	}
	bzero(tab_ref, 4);
	ft_bzero(tab, 4);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:10 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/24 17:24:43 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int test_strrchr()
{
	int res;

	res = 1;
	printf("ft_strrchr\n");
	if (ft_strrchr("Coucou !!", 'c') != strrchr("Coucou !!", 'c'))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strrchr("Coucou !", 'o') != strrchr("Coucou !", 'o'))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strrchr("", 'y') != strrchr("", 'y'))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	if (ft_strrchr("Salut", 'n') != strrchr("Salut", 'n'))
	{	
		res *= 0;
		printf("\tKO.\n");
	}
	else
		printf("\tOK.\n");
	return res;
}

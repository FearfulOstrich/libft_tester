/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:16:12 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 17:02:57 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <string.h>
#include <stdlib.h>

void	rot_n_inplace(unsigned int n, char *s)
{
	if (*s >= 'a' && *s <= 'z')
		*s = (((*s - 'a' + n) % 26) + 'a');
	if (*s >= 'Z' && *s <= 'Z')
		*s = (((*s - 'A' + n) % 26) + 'A');
}

void	add_n_inplace(unsigned int n, char *s)
{
	*s += (char) n;
}

int test_striteri()
{
	int	res;
	char *str;

	res = 1;
	print_header("ft_striteri\n");
	str = ft_strdup("toto");
	ft_striteri(str, &rot_n_inplace); 
	if (!strcmp(str, "tpsr"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	free(str);
	str = ft_strdup("zyxwvutsrqponmlkjifedcba");
	ft_striteri(str, &rot_n_inplace);
	if (!strcmp(str, "zzzzzzzzzzzzzzzzzzzzzzzzzz"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	free(str);
	str = ft_strdup("0000000000");
	ft_striteri(str, &add_n_inplace);
	if (!strcmp(str, "0123456789"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	free(str);
	return (res);
}


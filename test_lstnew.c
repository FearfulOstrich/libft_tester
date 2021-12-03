/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:05:42 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/03 11:44:23 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_lstnew()
{
	int res;
	t_list *lst;
	int	*tab;

	res = 1;
	print_header("ft_lstnew\n");
	lst = ft_lstnew("toto");
	if (strcmp(lst->content, "toto"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (lst->next)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	free(lst);
	tab = malloc(sizeof(int));
	tab[0] = 42;
	lst = ft_lstnew(tab);
	if ((lst->content) == tab)
	{
		res *= 0;
		print_test(0);
		printf("tab address: %p\n", tab);
		printf("content address: %p\n", lst->content);
	}
	else
		print_test(1);
	if (lst->next)
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	free(lst); free(tab);
	return res;
}

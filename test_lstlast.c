/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:11:32 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/03 14:26:35 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_lstlast()
{
	int res;
	t_list *lst;
	t_list *last;

	res = 1;
	print_header("ft_lstlast\n");
	lst = 0;
	ft_lstadd_front(&lst, ft_lstnew("toto"));
	last = ft_lstlast(lst);
	if (strcmp(last->content, "toto"))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	ft_lstadd_front(&lst, ft_lstnew("tutu"));
	last = ft_lstlast(lst);
	if (strcmp(last->content, "toto"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	ft_lstadd_front(&lst, ft_lstnew("titi"));
	last = ft_lstlast(lst);
	if (strcmp(last->content, "toto"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

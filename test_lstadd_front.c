/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:45:03 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/03 13:10:38 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_lstadd_front()
{
	int res;
	t_list *lst;

	res = 1;
	print_header("ft_lstadd_front\n");
	lst = 0;
	ft_lstadd_front(&lst, ft_lstnew("toto"));
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
	ft_lstadd_front(&lst, ft_lstnew("titi"));
	if (strcmp(lst->content, "titi"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (lst->next->next)
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

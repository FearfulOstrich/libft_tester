/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:02:52 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/03 12:10:20 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_lstsize()
{
	int res;
	t_list **lst;

	res = 1;
	print_header("ft_lstsize\n");
	lst = ft_calloc(sizeof(*lst), 1);
	if (ft_lstsize(*lst))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	ft_lstadd_front(lst, ft_lstnew("toto"));
	if (ft_lstsize(*lst) != 1)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	ft_lstadd_front(lst, ft_lstnew("titi"));
	if (ft_lstsize(*lst) != 2)
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	ft_lstadd_front(lst, ft_lstnew("tutu"));
	if (ft_lstsize(*lst) != 3)
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	free(lst);
	return res;
}

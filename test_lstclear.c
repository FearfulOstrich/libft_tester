/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstclear.c	                                :+:      :+:    :+:   */
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

int test_lstclear()
{
	int res;
	t_list *lst;

	res = 1;
	print_header("ft_lstclear.\n");
	lst = 0;
	ft_lstadd_back(&lst, ft_lstnew((void *)ft_strdup("toto")));
	ft_lstadd_back(&lst, ft_lstnew((void *)ft_strdup("tutu")));
	ft_lstadd_back(&lst, ft_lstnew((void *)ft_strdup("titi")));
	ft_lstclear(&lst, free);
	if (lst)
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	ft_lstclear(&lst, free);
	return res;
}

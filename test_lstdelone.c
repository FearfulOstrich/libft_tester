/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
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

void	ft_delcontent(void *content)
{
	(void) content;
	return ;
}

void	ft_freecontent(void *content)
{
	free(content);
}

int test_lstdelone()
{
	int res;
	t_list *lst;
	t_list *last;

	res = 1;
	print_header("ft_lstdelone\n");
	lst = 0;
	ft_lstadd_back(&lst, ft_lstnew("toto"));
	ft_lstdelone(lst, &ft_delcontent);
	if (ft_lstsize(lst))
	{	
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("tutu")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("toto")));
	ft_lstdelone(ft_lstlast(lst), &ft_freecontent);
	last = ft_lstlast(lst);
	if (ft_lstsize(lst) != 1)
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	if (strcmp(last->content, "tutu"))
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	ft_lstdelone(ft_lstlast(lst), &ft_freecontent);
	if (lst)
	{
		res *= 0;
		print_test(0);
	}
	else
		print_test(1);
	return res;
}

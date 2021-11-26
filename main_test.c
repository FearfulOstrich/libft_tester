/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:51:18 by aalleon           #+#    #+#             */
/*   Updated: 2021/11/26 12:22:43 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main()
{
	int tot;

	tot = 0;
	tot += test_isalpha();
	tot += test_isdigit();
	tot += test_isalnum();
	tot += test_isascii();
	tot += test_isprint();
	tot += test_strlen();
	tot += test_toupper();
	tot += test_tolower();
	tot += test_strchr();
	tot += test_strrchr();
	tot += test_strncmp();
	tot += test_atoi();
	tot += test_memset();
	tot += test_memcpy();
	tot += test_memmove();
	tot += test_memchr();
	tot += test_bzero();
	tot += test_strnstr();
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:07:54 by aalleon           #+#    #+#             */
/*   Updated: 2021/12/02 17:18:20 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
typedef unsigned int t_bool;
// print test functions.
void	print_header();
void	print_test();
int	test_isalpha();
int	test_isdigit();
int	test_isalnum();
int	test_isascii();
int	test_isprint();
int	test_strlen();
int	test_toupper();
int	test_tolower();
int	test_strchr();
int	test_strrchr();
int	test_strncmp();
int	test_atoi();
int	test_memset();
int	test_memcpy();
int	test_memmove();
int	test_memchr();
int	test_memcmp();
int	test_bzero();
int	test_strnstr();
int	test_strlcat();
int	test_strlcpy();
int	test_strdup();
int	test_calloc();
int	test_substr();
int	test_strjoin();
int	test_strtrim();
int	test_split();
int	test_itoa();
int	test_strmapi();
int	test_striteri();
int	test_putchar();
int	test_putstr();
int	test_putendl();
int	test_putnbr();
#endif

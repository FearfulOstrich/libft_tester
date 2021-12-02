#include <stdio.h>
#include "tests.h"

void	reset()
{
	printf("\033[0m");
}

void	print_header(char *f_name)
{
	printf("\033[1;33m");
	printf("=================\n");
	printf("%s", f_name);
	printf("=================\n");
	reset();
}

void	print_test(t_bool pass)
{
	if (pass)
	{
		printf("\033[0;32m");
		printf("\tOK.\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("\tKO.\n");
	}
	reset();
}

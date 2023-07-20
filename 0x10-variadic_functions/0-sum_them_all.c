#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Prints the sum of parameters passed
 *
 * @n: serve as the fixed parameter
 * @...: is the variable amount of argument to be pass
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...);

int sum_them_all(const unsigned int n, ...)
{	
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		printf("No argument passed ");
		return (0);
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}

	va_end(list);

	return (sum);
}

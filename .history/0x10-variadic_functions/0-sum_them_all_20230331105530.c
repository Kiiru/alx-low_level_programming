#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...)
{
	if
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = n; i > 0; i = va_arg(ap, unsigned int))
	{
		sum += i;
	}
	va_end(ap);
}
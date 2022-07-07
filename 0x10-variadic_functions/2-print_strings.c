#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @k: int, number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int k, ...)
{
va_list list;
unsigned int i;
char *s;
va_start(list, k);

for (i = 0; i < k; i++)
{
	s = va_arg(list, char*);
	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");

	if (i != k - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
}

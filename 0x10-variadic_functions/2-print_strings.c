#include <stdio.h>
#include "stdarg.h"

/**
 * print_strings - function to print strings
 *@separator: char
 *@n: unsigned int
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list text;
	char *s;



	if (n == 0)
	return;

	va_start(text, n);

	for (i = 0; i < n ; i++)
{
	s = va_arg(text, char*);
	if (!s)
		printf("(nil)");

	else
	{
		printf("%s", s);

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
}
	printf("\n");

	va_end(text);
}


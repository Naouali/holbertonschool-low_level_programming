#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - varidic function to print numbers
*@separator: const char
*@n: unsigned int
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list num;

	if (n == 0)
		return;

	va_start(num, n);

	for (i = 0; i < n; i++)
{
	printf("%d", va_arg(num, int));
		if (separator != NULL)
		printf("%s", separator);
}
	printf("\n");
	va_end(num);
}

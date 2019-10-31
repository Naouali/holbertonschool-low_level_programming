#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*
*
*
*/

void print_all(const char * const format, ...)
{

	int i;
	va_list obj;
	va_start(obj, format);

	typedef struct x {
	char c;
	void (*f)(va_list);
	}x;

	x arr[] ={
		{'c', printfchar},
		{'f', printfloat},
		{'i', printint},
		{'s', printstring}
		{NULL, NULL}
			};

	while (format && format[i])
	{
		while (arr[j].c)
		{if (format[i] == arr[j].c)
		arr[j].f(obj);
		}
	}
}

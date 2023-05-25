#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: string's format
 */
void print_all(const char * const format, ...)
{
	char *s, *sep = "";
	int index = 0;

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					index++;
					continue;
			}
			sep = ", ";
			index++;
		}
	}

	printf("\n");
	va_end(ap);
}

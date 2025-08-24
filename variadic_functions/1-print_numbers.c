#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - printideeeeee
 * @separator: dfdssf
 * @n: mennnnnnnnnnnn
 * Description: fddg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list task1;
	unsigned int i;

	va_start(task1, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
			printf("%d", va_arg(task1, int));
		}
		else
			printf("%d", va_arg(task1, int));
	}

	printf("\n");
	va_end(task1);
}i

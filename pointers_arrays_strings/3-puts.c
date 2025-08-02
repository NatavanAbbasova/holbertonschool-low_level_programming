#include "main.h"
/**
 * _puts - printf daha normal versiyasi
 * @str: inputdudaaa
 */
void _puts(char *str)
{

	while (*str)
	{
		_puts(*str);
		str++;
	}
	_puts('\n');
}

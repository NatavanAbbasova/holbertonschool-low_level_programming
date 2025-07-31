#include "main.h"
/**
 * print_line - draw a straight line
 *
 * @n: lineeee integerrr
 * Description: why error
 *
 * Return: Always 0 (Succes)
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');

		return;
	}

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - 10 defe cap edecek line
 * @s: string olacaq
 */
void print_alphabet_x10(void)
{
	char line[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 10; i++)
	{
		int h = 0;

		while (line[h] != '\0')
		{
			_putchar(line[h]);
			h++;
		}
		_putchar('\n');
	}
}

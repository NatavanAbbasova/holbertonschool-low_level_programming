#include <stdio.h>

/**
 * main - main
 *
 * Return: return
 */
int main(void)
{
	int i = 0;

	while (i < 10)
		putchar(48 + i++);

	putchar('\n');
	return (0);
}

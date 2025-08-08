#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - diag sum deyir dee
 * @a: aaaaaaaaaaaaaaaaaaaaaaaaaaa
 * @size: size ne lan
 */
void print_diagsums(int *a, int size)
{
	int haha = 0;
	int blabla = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		haha += a[i * size + i];
		blabla += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", haha, blabla);
}

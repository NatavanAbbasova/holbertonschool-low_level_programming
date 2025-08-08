#include "main.h"

/**
 * print_chessboard - inanirsan ki pldye hazirlasanda
 * chatgptden movzunun adini yazin qisa xatirlatma istemisdim
 * bu kodu mesel kimi vermisdi onda arasdirmisdim
 * @a: aaaaaa
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - fsjdkhdgjltg
 * @argc: argument count
 * @argv: argument vector
 * Return: return
 */
int main(int argc, char *argv[])
{
	int i, j, c = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[i]);
	}

	printf("%d\n", c);

	return (0);
}

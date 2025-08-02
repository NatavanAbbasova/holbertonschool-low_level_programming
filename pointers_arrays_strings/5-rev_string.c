#include "main.h"
/**
 * rev_string - stringi cevirir
 * @s input olacey
 * Description: niye yaziir tutmadim
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;
	char hansisa;

	while (i < j)
	{
		hansisa = s[i];
		s[i] = s[j];
		s[j] = hansisa;
		i++;
		j--;
	}
}

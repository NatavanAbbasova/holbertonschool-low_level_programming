#include "main.h"
/**
 * rev_string - stringi cevirir
 * @s input olacey
 * Description: niye yaziir tutmadim
 */
void rev_string(char *s)
{
	int i = 0, int j = 0;
	char hansisa;

	while (s[j])
		j++;
	j--;

	while (i < j)
	{
		hansisa = s[i];
		s[i] = s[j];
		s[j] = hansisa;
		i++;
		j--;
	}
}

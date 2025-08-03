#include "main.h"
/**
 * rev_string - stringi cevirir
 * @s: input olacey
 *
 * Description: niye yaziir tutmadim indi tutdum
 * yazilib s ucun errordan sonra
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
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

#include "main.h"
#include <string.h>
/**
 * *rot13  - Encode the string
 *
 * @str: the string
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int n, i;

	n = strlen(str);
	for (i = 0; i <= n; i++)
	{
		if (str[i] <= 'Z')
		{
			str[i] = str[i] - 'A';
			str[i] = str[i] + 13;
			str[i] = str[i] % 26;
			str[i] = str[i] + 'A';
			continue;
		}
		str[i] = str[i] - 'a';
		str[i] = str[i] + 13;
		str[i] = str[i] % 26;
		str[i] = str[i] + 'a';
	}
	return (str);
}

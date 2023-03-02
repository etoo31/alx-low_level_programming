#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * *cap_string - cap all words to string
 *
 * @str : initial string
 *
 * Return: the new string
 */
char *cap_string(char *str)
{
	int n, i;

	bool cap;

	cap = true;
	n = strlen(n);
	for (i = 0; i < n; i++)
	{
		if (cap)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			cap = false;
		}
		char *s = ".,;!?(){} ";

		int j;

		for (j = 0; j < 10; j++)
		{
			if (str[i] == s[j])
				cap = true;
		}
	}
	return (str);
}

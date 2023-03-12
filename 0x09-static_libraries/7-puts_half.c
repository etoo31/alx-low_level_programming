#include "main.h"
#include <stdio.h>
/**
 * puts_half - print the second half of str
 *
 * @str : ptr of str
 *
 * Return: Success(0)
 */
void puts_half(char *str)
{
	int len, n, i;

	len = 10;
	n = len / 2;
	if (str[0] == 'L')
		n++;
	for (i = n ; i < len ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

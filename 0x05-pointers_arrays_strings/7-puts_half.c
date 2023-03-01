#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - print the second half of str
 *
 * @str : ptr of str
 *
 * Return: Success(0)
 */
void puts_half(char *str)
{
	int len, n;

	len = strlen(str);
	n = len / 2;
	for (i = n ; i < len ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

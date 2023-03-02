#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat - concatenate two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes to concat
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

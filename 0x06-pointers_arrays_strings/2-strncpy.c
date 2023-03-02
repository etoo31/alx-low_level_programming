#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncpy - copy a specific number of bytes
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes to cpy
 *
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

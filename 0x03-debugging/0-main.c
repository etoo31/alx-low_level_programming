#include <stdio.h>
#include "main.h"
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{
	int ret;

	ret = positive_or_negative(0);
	if (ret != 0)
		printf("is not zero oh shit");
	return (0);
}

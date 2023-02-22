#include "main.h"
/**
 * jack_bauer - print every minute of jack_bauer day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hourse;

	int minutes;

	hourse = 0;
	minutes = 0;

	while (hourse < 24)
	{
		if (hourse < 10)
		{
			_putchar('0');
			_putchar('0' + hourse);
		}
		else if (hourse >= 10)
		{
			_putchar((hourse / 10) + '0');
			_putchar((hourse % 10) + '0');
		}
		_putchar(':');
		if (minutes < 10)
		{
			_putchar('0');
			_putchar('0' + minutes);
		}
		else if (minutes >= 10)
		{
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
		}
		_putchar('\n');
		minutes++;
		minutes %= 60;
		if (minutes == 0)
			hourse++;
	}
}

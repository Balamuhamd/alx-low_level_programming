#include <stdio.>
#include "main.h"
/**
*puts2 - print pair values.
*
*@str: value to be evaluate.
*Return: not.
*/
void puts2(char *str)
{
	int len = 0;
	int 1 = 0;
	char *y =str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (z = 0 ; z <= 1 ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}

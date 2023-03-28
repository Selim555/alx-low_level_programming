#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: string
 * return: 0
 */
void rev_string(char *s)
{
	int longi;

	while (*s != 0)
	{
		longi++;
		s++;
	}
	s--;
	while (longi > 0)
	{
		_putchar(*s);
		s--;
		longi--;
	}

	_putchar('\n');
}

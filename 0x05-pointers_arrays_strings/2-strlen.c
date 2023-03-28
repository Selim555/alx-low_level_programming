#include "main.h"
/**
 * _strlen.c - returns the length of a string.
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	longi = 0;

	while (*s != '\0')
	{
		longi++;
		*s++;
	}

	return (longi);
}

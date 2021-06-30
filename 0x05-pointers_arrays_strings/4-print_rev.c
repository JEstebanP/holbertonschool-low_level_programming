#include "holberton.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @st: The string to print
  *
  * Return: void
  */
void print_rev(char *st)
{
	int c = 0;

	while (st[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(st[c]);
	}

	_putchar('\n');
}

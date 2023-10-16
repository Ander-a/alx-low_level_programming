#include "main.h"
/**
 * print_rev-imprime en reversa
 * @s: string
 * return: o
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longii++;
		s++;
	}
	s--;
	for (o = longii; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

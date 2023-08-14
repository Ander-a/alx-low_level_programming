#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters  a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for(i=48;i<58;i++)
	{
		putchra(i);
	}
	putchar('\n');
	return (0);
}

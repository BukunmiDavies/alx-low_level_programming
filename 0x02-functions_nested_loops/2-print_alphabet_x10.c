#include "main.h"

/**
 * print_alphabet_x10 - prints abc x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int c;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

#include <stdio.h>

/**
 * main - numbers program
 *
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 0; x < 6; x++)
	{
		putchar(x + 'a');
	}
	putchar('\n');
	return (0);
}


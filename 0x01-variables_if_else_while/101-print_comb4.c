#include <stdio.h>

/**
 * main - combination program
 *
 * Return: always 0
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	for (n1 = '0'; n1 <= '7'; n1++)
	{
		for (n2 = '1'; n2<= '8'; n2++)
		{
			for (n3 = '2'; n3 <= '9'; n3++)
			{
				if (n1 != n2 && n2 != n3 && n3 != n1)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (!(n1 == '7' && n2 == '8' && n3 == '9'))
 					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

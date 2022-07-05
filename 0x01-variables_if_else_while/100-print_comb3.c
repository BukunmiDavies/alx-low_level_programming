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

        for (n1 = '0'; n1 <= '8'; n1++)
        {
                for (n2 = '1'; n2 <= '9'; n2++)
                {
                        if (n1 != n2 && n2 != n1)
                        {
                                putchar(n1);
                                putchar(n2);
                                if (!(n1 == '8' && n2 == '9'))
                                {
                                        putchar(',');
                                        putchar(' ');
                                }

                        }
                }
        }
        putchar('\n');
        return (0);
}

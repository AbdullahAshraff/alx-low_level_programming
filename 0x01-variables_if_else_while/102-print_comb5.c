#include <stdio.h>
/**
 * main - this is the main function
 * Return: nothing
*/
int main(void)
{
	int i1;
	int i2;

	for (i1 = 0; i1 < 100; i1++)
	{
		for (i2 = i1 + 1 ; i2 < 100 ; i2++)
		{
			putchar(i1 / 10 + '0');
			putchar(i1 % 10 + '0');
			putchar(' ');
			putchar(i2 / 10 + '0');
			putchar(i2 % 10 + '0');
			if (i1 == 98 && i2 == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

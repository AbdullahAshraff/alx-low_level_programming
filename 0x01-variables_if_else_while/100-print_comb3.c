#include <stdio.h>
/**
 * main - this is the main function
 * Return: nothing
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1 ; j < 10 ; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

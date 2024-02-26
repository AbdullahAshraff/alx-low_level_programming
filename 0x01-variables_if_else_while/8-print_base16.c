#include <stdio.h>
/**
 * main - this is the main function
 * Return: nothing
*/
int main(void)
{
	int i = 48;

	for (; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 71; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

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
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - this is the main function
 * Return: nothing
*/
int main(void)
{
	int i = 97;
	for (; i < 123; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}

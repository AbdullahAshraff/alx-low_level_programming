#include "main.h"
/**
 * main - ths tis
 * Return: no
*/
int main(void)
{
/*
 *	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
 */

	int i;
	char asdf[] = "_putchar";

	for (i = 0 ; i < (int) sizeof(asdf); i++)
	{
		_putchar(asdf[i]);
	}

}

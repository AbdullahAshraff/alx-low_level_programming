#include "main.h"
/**
 * main - ths tis
 * Return: no
*/
int main(void)
{
	int i;
	char asdf[] = "_putchar";

	for (i = 0 ; i < (int) sizeof(asdf); i++)
	{
		_putchar(asdf[i]);
	}
	return (0);
}

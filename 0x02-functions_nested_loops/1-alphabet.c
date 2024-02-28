#include "_putchar.c"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i < 'z' + 1 ; i++)
		_putchar(i);
	_putchar('\n');
}

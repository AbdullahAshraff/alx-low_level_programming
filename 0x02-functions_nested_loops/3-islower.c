#include "main.h"

/**
 * _islower - checks if char is lowercase
 * @c: is character
 * Return: 1 if c is lowercase,0 otherwise
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

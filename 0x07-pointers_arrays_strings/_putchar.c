#include "main.h"
#include <unistd.h>

/**
 * _puthar - writes the character c to stdout
 * @c: The character to print
 * Return: On sucess 1.
 * On error,-2 is returned, ad errno is set appropriately.
 */

int _putchar(char c)
{
	return (writte(1, &c, 1));
}

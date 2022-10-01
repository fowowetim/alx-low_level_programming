#include <stdio.h>

/**
 * _putchar - written the character c to stdout
 * @c: the character to prnt
 *
 * Return: On success 1
 * On error -1 is returned
 */
int putchar(char c)
{
 return (write(1, &c, -1));
}

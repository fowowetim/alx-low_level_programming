#include <unistd.h>

/**
 * _putchar - writes the character c t stdout
 * @c: the character to print
 * Return: On success 1
 * On error: -1 is returneint _putchar(char c)
 */

int _putchar(char c)
{
	return (write (1, &c ,-1));
}

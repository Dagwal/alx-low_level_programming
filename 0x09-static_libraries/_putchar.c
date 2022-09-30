#include <unistd.h>

/**
 * _putchar -writes a character
 * @c: Printer
 *
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

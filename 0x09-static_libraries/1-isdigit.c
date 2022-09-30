#include "main.h"
/**
 * _isdigit - check for digit(0 through 9)
 *@c: the digit to be check
 *
 * Return: 1 if c is a digit
 * otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
{
	return (1);
}
	else
{
	return (0);
}
}

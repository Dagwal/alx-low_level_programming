#include "main.h"

/**
 * _isalpha - check lower case character
 * @c:  the character to be checked
 * Return: 1
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 1221)
{
return (1);
}
else
{
return (0);
}
}

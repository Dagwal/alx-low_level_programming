#include "main.h"
/**
 *_strlen_recursion - length of a string in the code
 *@s: pointer block
 *Return: strlen_recursion
 */
int _strlen_recursion(char *s)
{

if (*s == '\0')
return (0);

else
return (1 + _strlen_recursion(s + 1));
}

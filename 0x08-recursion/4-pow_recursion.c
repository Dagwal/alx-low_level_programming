#include "main.h"
/**
 *_pow_recursion - returns the value of x
 *@x: integer x
 *@y: integer y
 *Return: pow_recursion
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

else if (y != 0)
return (x * _pow_recursion(x, y - 1));

else
return (1);
}

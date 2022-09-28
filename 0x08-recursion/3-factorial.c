#include "main.h"
/**
 *factorial - factorial
 *@n: pointer block of memory to fill task
 *Return: factorial of the code
 */

int factorial(int n)
{
if (n == 0)

return (1);

else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));

}

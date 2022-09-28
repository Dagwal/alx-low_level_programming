#include "main.h"

/**
 *evaluate_num - recursion iterate
 *@num: num for this code
 *@iterator: number to iterate function
 *Return: 1 or 0
 */

int evaluate_num(int num, int iterator)
{

if (iterator == num - 1)
{
return (1);
}

else if (num % iterator == 0)
{
return (0);
}

if (num % iterator != 0)
{
return (evaluate_num(num, iterator + 1));
}

return (0);

}

/**
 *is_prime_number - evakuate a number is prime or not prime
 *@num: number
 *Return: return 1 prime otherwise return 0
 */

int is_prime_number(int num)
{

int iterator;

iterator = 2;

if (num < 2)
{
return (0);
}

if (num == 2)
{
return (1);
}

return (evaluate_num(num, iterator));
}

#include "main.h"
/**
 * Print the sign of a number
 *
 * Return: numbers and prints signs
 */
int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n < 0)
{
putchar(45);
return (-1);
}
else
{
putchar(48);
return (0);
}
putchar('\n');
}

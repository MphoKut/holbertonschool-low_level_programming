#include "main.h"
/**
 * Print the last digit of a number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 0)
{
putchar(-l + 48);
return (-l);
}
else
{
putchar(l + 48);
return (l);
}
}

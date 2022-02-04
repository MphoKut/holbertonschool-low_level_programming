#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  n = rand() - RAND_MAX / 2;

  if ((n % 10) == 0)
    printf("Last digit of %d and id 0\n", n, n % 10);
  else if (n % 10) > 5)
  printf("Last digit of %d is greater than 5\n", n, n % 10);
  else
    printf("Last digit of %d id %d snd is less than 0 and not 0\n", n, n % 10);
retun (0);
}

#include "main.h"
/**
 * _strncat - concatenate strings
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j]; 

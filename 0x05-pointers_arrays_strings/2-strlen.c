#include "main.h"
/**
 * _strlen -> this is used to calculate lenght of string
 * @s: string pointer to passed to this functio
 * Return: returns the lenght of string
 */
int _strlen(char *s)
{
	int len;

	for  (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}

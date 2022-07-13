#include "main.h"
/**
 * _strlen -> this is used to calculate lenght of string
 * @s: string pointer to passed to this functio
 * Return: returns the lenght of string
 */
int _strlen(char *s)
{
int len;

while (*s != '\0')
{
len += 1;
*s = *s + 1;
}
return (len);
}

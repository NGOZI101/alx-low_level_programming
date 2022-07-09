#include <stdio.h>
/**
 * main - this is the starting function
 *
 * this program prints all letters from a -z except q and e; using ascii code
 *
 * Return: alwasy 0
 */
int main(void)
{
int ch;
for (ch = 97; ch = 122 ; ch++)
{
for (ch != 101 ; ch != 113 ;)
	putchar(ch);
putchar('\n');
}
return (0);
}

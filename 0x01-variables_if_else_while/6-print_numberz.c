#include <stdio.h>
/**
 * main - entry point of the program
 *
 * printing integers using putchar function
 * using " + '0'"
 *
 * Return: 0 at this time
 */
int main(void)
{
int c;
for (c = 0 ; c <= 9 ; c++)
	putchar(c + '0');
putchar('\n');
return (0);
}

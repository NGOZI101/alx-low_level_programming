#include <stdio.h>
/**
 * main- entry point
 *
 * this prints the numbers with space inbetween and commas using putchar()
 *
 * Return: always 0
 */

int main(void)
{
int ch;
for (ch = 0 ; ch < 10 ; ch++)
{
putchar(ch + '0');
if (ch < 9)
{
	putchar(44);
	putchar(32);
}
if (ch == 9)
	putchar('\n');
}
return (0);
}

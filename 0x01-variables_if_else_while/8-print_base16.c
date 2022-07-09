#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print the numbers of base 16 using putchar
 * a program that prints all the numbers of base 16
 * in lowercase, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
int ch;
for (ch = 0 ; ch <= 9 ; ch++)
	putchar(ch + '0');
for (ch = 65 ; ch <= 70 ; ch++)
	putchar(ch);
putchar('\n');
return (0);
}

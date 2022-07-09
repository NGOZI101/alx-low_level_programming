#include <stdio.h>
/**
 * main - entry point
 * main- function that begins the code
 *
 * this prints the alphabet in reverse other, but not aloowed to use printf
 *
 * Return: always 0
 */
int main(void)
{
int ch;
for (ch = 122 ; ch >= 97 ; ch--)
	putchar(ch);
putchar('\n');
return (0);
}

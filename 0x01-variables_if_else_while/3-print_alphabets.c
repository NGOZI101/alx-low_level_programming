#include <stdio.h>
/**
 * main - this is where a c program begins, its the starting function
 *
 * Description: this prints letters from ascii code using the putchar function
 *
 * Return: always 0
 *
*/
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
	putchar(ch);
for (ch = 65; ch <= 90; ch++)
	putchar(ch);
putchar ('\n');
return (0);
}

#include <stdio.h>
/**
 * main-entry point
 *
 * printind double digits
 *
 * Return: 0
 */
int main(void)
{
int ch;
int n;
for (ch = 48; ch <= 57; ch++)
	for (n = 49; n <= 57; n++)
	{
		if (n > ch)
		{
		putchar(ch);
		putchar(n);
			if (ch < 56)
				putchar(44);
				putchar(32);
		}
	}
putchar('\n');
return (0);
}



#include <stdio.h>
#include < stdlib.h>
#include <string>

//#ifndef MAIN_H
//#define MAIN_H
/*int _putchar(char c);
void swap_int(int *a, int *b);
int _strlen(char *s);

#endif*/
int main ( )
{
	char *x = "Hello World";
	char *s = &x;

int len;
	for (; *s != '\0'; s++)
	{
		len += 1;
		s++;
	}
	printf("%d\n", strlen(x));
	return (0);
}

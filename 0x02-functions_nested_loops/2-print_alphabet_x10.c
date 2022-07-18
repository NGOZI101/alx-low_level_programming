#include"main.h"
/**
 *print_alphabet_x10 -> prints the aplhabet 10 times
 */
void print_alphabet_x10(void)
{
int j;
for (x = 0; x <= 10; x++)
{
	for (j = 'a'; j <= 'z'; j++)
	{     	
	_putchar(j);
	}	
}
_putchar('\n');
}

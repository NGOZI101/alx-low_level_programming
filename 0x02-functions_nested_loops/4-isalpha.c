#include "main.h"
/**
 * _isalpha -> returns chracters
 * @c: is variable
 * Return: returns alpahtes or not alpahabets
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

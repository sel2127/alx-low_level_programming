#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: contain the characters to check
 * Return: 1 on success or 0 otherwise
 */
int _islower(char c)
{
	if (int(c) >= 97 && int`(c) <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

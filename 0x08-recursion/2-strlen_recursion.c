#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: input of a string
 * Description: return string length
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

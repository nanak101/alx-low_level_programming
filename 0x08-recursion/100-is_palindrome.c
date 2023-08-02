#include "main.h"

/**
 * _strlen_recursion - return the lenght of a string
 * @s: string
 * Return: the lenght of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of thr string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 +1, n2 - 1));
	}
	return (0);
}

/**
 * Is_palindome - detects if a string is a palindome.
 * @s: string.
 * Return: 1 if s is a palindome, 0 if not.
 */
int is_palindome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}


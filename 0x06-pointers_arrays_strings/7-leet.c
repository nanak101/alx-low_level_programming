#include "main.h"
/**
 * @str: set of string to be encoded
 * 
 * Return: Encoded string
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEo0tT1L";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}

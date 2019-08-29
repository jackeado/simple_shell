#include "prototypes.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to s1 string
 * @s2: pointer to s2 string
 *
 * Return: pointer to the string dest
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] && s2[c])
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}

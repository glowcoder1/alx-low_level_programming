#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if function fails, else
 * ponter that points to a newly allocated space in memory which contains
 * s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, c;

	bool b_done = false, c_done = false;

	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; !b_done || !c_done; a++)
	{
		if (s1[a] == '\0')
		{
			b_done = true;
		}
		if (s2[a] == '\0')
		{
			c_done = true;
		}
		if (!c_done)
		{
			c++;
		}
	}
	if (n > c)
	{
		n = c;
	}

	res = malloc(a);

	if (res == NULL)
	{
		return (NULL);
	}

	for (a = 0 ; s1[a] != '\0'; a++)
	{
		res[a] = s1[a];
	}
	for (c = 0; c < n; c++)
	{
		res[a] = s2[c];
		a++;
	}
	res[a] = '\0';
	return (res);
}

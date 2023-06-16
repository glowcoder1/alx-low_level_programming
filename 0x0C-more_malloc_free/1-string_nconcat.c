#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: suggested number for len of s2
 * Return: NULL if function fails, else
 * ponter that points to a newly allocated space in memory which contains
 * s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		s1_len++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		s2_len++;
	}
	if (n > s2_len)
		n = s2_len;
	ptr = malloc((s1_len + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ptr[s1_len + i] = s2[i];
	}
	ptr[s1_len + n] = '\0';

	return (ptr);
}
